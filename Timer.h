#include "stdint.h"
#include "DigitalIO.h"
#include "tm4c123gh6pm.h"

//#define NVIC_ST_CTRL_R (*((volatile unsigned long *)0xE000E010))
//#define NVIC_ST_RELOAD_R (*((volatile unsigned long *)0xE000E014))
//#define NVIC_ST_CURRENT_R (*((volatile unsigned long *)0xE000E018))

void Clock_Delay(unsigned long delay);

void Wait_1ms(int factor);

void Wait_1sec(int factor);
	
void Wait_1min(int number_of_minutes);