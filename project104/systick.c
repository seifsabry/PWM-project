#include "systickR.h"

void systick(void)
{
	unsigned long seconds;
	unsigned long i;
	for(i=0;i<seconds;i++)
	{
		NVIC_ST_CURRENT=0;
		NVIC_ST_RELOAD= 16000000 -1; 
		NVIC_ST_CTRL=0x05;
	}
}