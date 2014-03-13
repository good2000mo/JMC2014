#ifndef _LINESLOW_
#define _LINESLOW_
#include "HardwareInfo.c"
#include <SetMotor_Code.h>

void LineSlow(unsigned char Speed1, unsigned char Speed2, unsigned char Speed3, unsigned char Speed4)
{
    // extern global var
    extern unsigned char g_TurnSpeed;

    unsigned char Speed5 = 0;
    extern unsigned char A1 ;
    extern unsigned char A2 ;
    extern unsigned char A3 ;
    extern unsigned char A4;
    extern unsigned char A5 ;
    extern unsigned char A6 ;
    extern unsigned char A7 ;
    extern unsigned char park ;
    extern unsigned char g_flag ;
    extern unsigned char PLTime;
    extern unsigned long T7 ;
    extern unsigned long T1 ;
    extern unsigned long T6 ;
    extern unsigned long T2 ;
    
    
    if ( A3&&A4&&A5 )
    {
        SetMotor_Code(1, 0, Speed1);
        SetMotor_Code(2, 0, Speed1);
    }
    else
    {
        if ( A3&&A4 )
        {
            SetMotor_Code(1, 0, Speed2);
            SetMotor_Code(2, 0, Speed1);
        }
        else
        {
            if ( A5&&A4 )
            {
                SetMotor_Code(1, 0, Speed1);
                SetMotor_Code(2, 0, Speed2);
            }
            else
            {
                if ( A4 )
                {
                    SetMotor_Code(1, 0, Speed1);
                    SetMotor_Code(2, 0, Speed1);
                }
                else
                {
                    if ( A3&&!A2 )
                    {
                        Speed5=Speed2/2;
                        SetMotor_Code(1, 0, Speed4);
                        SetMotor_Code(2, 0, Speed1);
                    }
                    else
                    {
                        if ( A5&&!A6 )
                        {
                            Speed5=Speed2/3;
                            SetMotor_Code(1, 0, Speed1);
                            SetMotor_Code(2, 0, Speed4);
                        }
                        else
                        {
                            if ( A3&&A2 )
                            {
                                SetMotor_Code(1, 1, Speed4);
                                SetMotor_Code(2, 0, Speed1);
                            }
                            else
                            {
                                if ( A5&&A6 )
                                {
                                    SetMotor_Code(1, 0, Speed1);
                                    SetMotor_Code(2, 1, Speed4);
                                }
                                else
                                {
                                    if ( A2 )
                                    {
                                        SetMotor_Code(1, 2, Speed4);
                                        SetMotor_Code(2, 0, Speed1);
                                    }
                                    else
                                    {
                                        if ( A6 )
                                        {
                                            SetMotor_Code(1, 0, Speed1);
                                            SetMotor_Code(2, 2, Speed4);
                                        }
                                        else
                                        {
                                            if ( A1&&!A2&&!A3&&!A4&&!A5&&!A6&&!A7 )
                                            {
                                                SetMotor_Code(1, 2, 40);
                                                SetMotor_Code(2, 0, g_TurnSpeed);
                                            }
                                            else
                                            {
                                                if ( A7&&!A1&&!A2&&!A3&&!A4&&!A5&&!A6 )
                                                {
                                                    SetMotor_Code(1, 0, g_TurnSpeed);
                                                    SetMotor_Code(2, 2, 40);
                                                }
                                                else
                                                {
                                                    if ( park==1&&!A1&&!A2&&!A3&&!A4&&!A5&&!A6&&!A7 )
                                                    {
                                                        SetMotor_Code(1, 2, g_TurnSpeed);
                                                        SetMotor_Code(2, 0, g_TurnSpeed);
                                                    }
                                                    else
                                                    {
                                                        if ( park==7&&!A1&&!A2&&!A3&&!A4&&!A5&&!A6&&!A7 )
                                                        {
                                                            SetMotor_Code(1, 0, g_TurnSpeed);
                                                            SetMotor_Code(2, 2, g_TurnSpeed);
                                                        }
                                                        else
                                                        {
                                                            SetMotor_Code(1, 0, Speed1);
                                                            SetMotor_Code(2, 0, Speed1);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
        if ( A2==1 )
        {
            if(abs(T2-T7)>PLTime) park=1;
        }
        if ( A6==1 )
        {
            if(abs(T6-T1)>PLTime) park=7;
        }
        if ( A1 )
        {
            park=1;
        }
        if ( A7 )
        {
            park=7;
        }
}
#endif

