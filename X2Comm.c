#include "HardwareInfo.c"
#include "JMLib.c"
#include "JMSub2.c"
#include "GoLineSlow.c"


int   BitTest(unsigned   char   ch,   int   bit)   
  {   
  return   ch   &   (0x01   <<   bit)   ?   1   :   0;   
  }   

unsigned char A1 = 0;
unsigned char A2 = 0;
unsigned char A3 = 0;
unsigned char A4= 0;
unsigned char A5 = 0;
unsigned char A6 = 0;
unsigned char A7 = 0;

unsigned char park = 0;
unsigned char g_flag = 0;
unsigned long T7 = 99999;
unsigned long T1 = 0;
unsigned long T6 = 0;
unsigned long T2 = 99999;
unsigned char g_lr=0;


int DD;//出厂?置?量
unsigned char g_Big = 30;   //??更改
unsigned char state = 0;   //??更改



unsigned char A11 = 0;
unsigned char A22 = 0;
unsigned char A33 = 0;
unsigned char A44= 0;
unsigned char A55 = 0;
unsigned char A66= 0;
unsigned char A77 = 0;



// define global var
unsigned char g_Small = 15;
unsigned int Trace = 0;
unsigned char g_TurnSpeed = 60;
unsigned char PLTime = 5;
unsigned char g_Speed = 100;
unsigned int g_TimeOverTime = 10;
unsigned int now = 0;
unsigned int pre = 0;
double dcode = 0;

int main(void)
{
    X2RCU_Init();
    unsigned int b4 = 0;
    unsigned int b2 = 0;
    unsigned int var0 = 0;
    unsigned int var1 = 0;
    unsigned long T = 0;
    JMSub2();
    GoLineSlow(17, 1, 0);
    return 1;
}

