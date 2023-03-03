#include "BaseCommand.h"
#include "CommandHandler.h"


class ls : public BaseCommand
{
public:
    //MyCustomClass();
    void doSomething() override;
};

void ls::doSomething() {
    printf("This is from the ls class.\n");
    return;
}
// Register the class with the class registry
REGISTER_CLASS(ls);