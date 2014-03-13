#ifndef _TURNRIGHT_
#define _TURNRIGHT_
#include "HardwareInfo.c"
#include "TurnFun.c"

void TurnRight()
{
    TurnFun(100, -80, 5, 30, 0);
}
#endif

