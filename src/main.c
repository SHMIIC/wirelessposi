#include "rey_config.h"


//global value
unsigned int systick=0;
void main(void)
{

	rey_usart_config();
    rey_timer_config();
    rey_spi_config();
	EA = 1;
    while(1)
    {
        if(systick == 1000)
        {
            systick = 0;
            P26=!P26;
            PrintString1("ok\r\n");

        }
    }
}



/********************* Timer0�жϺ���************************/
#ifdef USE_TIMER0
void timer0_int (void) interrupt TIMER0_VECTOR
{
    systick++;
}
#endif

/********************* Timer1�жϺ���************************/
#ifdef USE_TIMER1
void timer1_int (void) interrupt TIMER1_VECTOR
{

}
#endif
