#include "timer.h"

void SysTich_Init()
	{
		NVIC_ST_CTRL_R = 0;
		NVIC_ST_RELOAD_R = 0x00FFFFFF;
		NVIC_ST_CURRENT_R = 0;
		NVIC_ST_CTRL_R = 0x00000005;
	}

void SysTich_Wait(unsigned long delay)
	{
		NVIC_ST_RELOAD_R = delay-1;
		NVIC_ST_CURRENT_R = 0;
		while((NVIC_ST_CTRL_R & 0x00010000)==0){};
	}
	
void SysTich_Wait_1ms(unsigned long delay)
	{
		unsigned long i;
		for(i=0; i<delay; i++)
			{
				SysTich_Wait(16000);
			}
	}
	
void SysTich_Wait_1s(unsigned long factor)
	{
		unsigned long i;
		for(i = 0; i < factor; i++)
			{
				SysTich_Wait_1ms(1000);
			}
	}

void SysTich_Wait_1min(unsigned long number_of_minutes)
	{
		unsigned long i;
		for(i = 0; i < number_of_minutes; i++)
			{
				SysTich_Wait_1s(60);
			}
	}