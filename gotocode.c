#ifndef _GOTOCODE_
#define _GOTOCODE_
#include "HardwareInfo.c"
#include <GetData.h>
#include <SetMotorCode0.h>
#include <SetMotor_Code.h>
#include <GetMotorCode.h>

void gotocode(int k, double distance)
{
    unsigned int speed = 0;
    double code = 0;
    double dcode = 0;
    dcode = GetData(2);
    if ( distance>=0 )
    {
        SetMotorCode0(2);
        speed=10*k;
        SetMotor_Code(1, 0, speed);
        SetMotor_Code(2, 0, speed);
        while (1)
        {
            code = GetMotorCode(2);
            if ( (code/dcode)>=distance )
            {
                break;
            }
        }
        SetMotor_Code(1, 1, speed);
        SetMotor_Code(2, 1, speed);
    }
    else
    {
        distance=-distance;
        SetMotorCode0(2);
        speed=10*k;
        SetMotor_Code(1, 2, speed);
        SetMotor_Code(2, 2, speed);
        while (1)
        {
            code = GetMotorCode(2);
            if ( (code/dcode)<=-distance )
            {
                break;
            }
        }
        SetMotor_Code(1, 1, speed);
        SetMotor_Code(2, 1, speed);
    }
}
#endif

