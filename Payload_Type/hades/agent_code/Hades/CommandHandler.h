#pragma once
#include <map>
#include <string>
#include "BaseCommand.h"

#define REGISTER_CLASS(className) \
    namespace { \
        BaseCommand* classFactory##className() { \
            return new className; \
        } \
        static const bool registered##className = \
            CommandHandler::getInstance().registerClass(#className, classFactory##className); \
    }


class CommandHandler {
public:
    typedef BaseCommand* (*ClassFactory)();  // define a function pointer type

    static CommandHandler& getInstance() {
        static CommandHandler registry;
        return registry;
    }

    bool registerClass(const std::string& className, ClassFactory factory) {
        classMap_[className] = factory;
        return true;
    }

    BaseCommand* createObject(const std::string& className) {
        if (classMap_.find(className) != classMap_.end()) {
            return classMap_[className]();
        }
        return nullptr;
    }

private:
    std::map<std::string, ClassFactory> classMap_;

    CommandHandler() {}  // private constructor to enforce singleton pattern
};
