#ifndef _GETUP_
#define _GETUP_
#include "HardwareInfo.c"
#include <SetMotor_Code.h>
#include <SetTenthS.h>
#include <SetThousandthS.h>
#include <SetOneServo.h>
#include "setdown.c"

void getup()
{
    SetMotor_Code(1, 1, 0);
    SetMotor_Code(2, 1, 0);
    SetTenthS(2);
    SetMotor_Code(1, 0, 30);
    SetMotor_Code(2, 2, 30);
    SetThousandthS(5);
    SetMotor_Code(1, 1, 35);
    SetMotor_Code(2, 1, 35);
    SetTenthS(3);
    SetOneServo(_SERVOCTRL_ST_, 2, 150, 100);
    SetTenthS(10);
    SetOneServo(_SERVOCTRL_ST_, 2, 100, 500);
    SetTenthS(10);
    SetOneServo(_SERVOCTRL_ST_, 1, 156, 0);
    SetTenthS(3);
    SetOneServo(_SERVOCTRL_ST_, 2, 50, 800);
    SetTenthS(15);
    SetOneServo(_SERVOCTRL_ST_, 2, 49, 400);
    SetOneServo(_SERVOCTRL_ST_, 1, 180, 400);
    SetTenthS(8);
    setdown();
}
#endif

