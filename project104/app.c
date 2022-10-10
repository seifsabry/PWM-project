#include "GPIOF.h"
#include "Interrupt.h"
#include "systick.h"

unsigned long time = 12;

int main()
{
	portFInit();
	systickInterrupt();

	while(1)
	{}
}