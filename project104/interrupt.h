#include "systickR.h"
#include "GPIO.h"
#include "RGB.h"

unsigned long counter;
extern unsigned long time;

void SysTick_Handler()
{
	counter++;
	if ((counter % time) == 0)
	{
	 toggle(BlueLED);
	}
}