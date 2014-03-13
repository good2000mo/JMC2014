#ifndef _TURNLEFT_
#define _TURNLEFT_
#include "HardwareInfo.c"
#include "TurnFun.c"

void TurnLeft()
{
    TurnFun(-80, 100, 3, 20, 1);
}
#endif

