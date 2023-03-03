#pragma once


// Abstract class that only implements virtual methods
class BaseCommand {
public:
    virtual void doSomething() = 0;
};
