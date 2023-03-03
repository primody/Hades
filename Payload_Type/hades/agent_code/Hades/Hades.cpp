#pragma once
#include "Hades.h"

Hades::Hades() {
	init_cmds();
}

void Hades::init_cmds() {
	INIT_CMD(ls, "ls");
}