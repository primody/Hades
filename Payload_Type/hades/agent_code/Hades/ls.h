#include "BaseCommand.h"
#include "CommandHandler.h"

class ls : public BaseCommand
{
public:
    //MyCustomClass();
    void doSomething() override;
};

// Register the class with the class registry
REGISTER_CLASS(ls);