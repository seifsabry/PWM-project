#include "systickR.h"
#include "GPIO.h"
#include "RGB.h"

unsigned long counter;
extern unsigned long time;

void systickInterrupt (void)
{
		NVIC_ST_CURRENT=0;
		NVIC_ST_RELOAD= 16000000 -1; 
		NVIC_ST_CTRL=0x7;
		__asm {cpsie i} ;
}

void SysTick_Handler()
{
	counter++;
	if ((counter % time) == 0)
	{
	 toggle(BlueLED);
	}
}