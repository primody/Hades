#include "BaseCommand.h"
#include "CommandHandler.h"

#define INIT_CMD(a, strname) \
	BaseCommand* a = CommandHandler::getInstance().createObject(strname);\
	if (a) {a->doSomething();}

class Hades {
public:
	Hades();
    void init_cmds();
};
