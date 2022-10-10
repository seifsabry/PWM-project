#include "systickR.h"

void systick(unsigned long seconds)
{
	unsigned long i;
	for(i=0;i<seconds;i++)
	{
		NVIC_ST_CURRENT=0;
		NVIC_ST_RELOAD= 16000000 -1; 
		NVIC_ST_CTRL=0x05;
	}
}

void systickInterrupt (void)
{
		NVIC_ST_CURRENT=0;
		NVIC_ST_RELOAD= 16000000 -1; 
		NVIC_ST_CTRL=0x7;
		__asm {cpsie i} ;
}