#include "GPIO.h"


#define		RedLED		0x02
#define		BlueLED		0x04
#define		GreenLED		0x08

void toggle(short LED)
{
		GPIO_PORTF_DATA ^=  LED ;
}