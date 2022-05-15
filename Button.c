#include "Button.h"


void button_init(char portName, unsigned char pinNumber)
{
	Port_Init(portName);
	Pin_Init_Dir(portName, pinNumber, 0);
	
}

void button_init_PUR(char portName, unsigned char pinNumber)
{
	Port_Init(portName);
	Pin_Init_Dir(portName, pinNumber, 0);
	Port_PUR_Enable(portName, pinNumber);
}


unsigned char button_read(char portName, unsigned char pinNumber)
{
	return Pin_Read(portName, pinNumber);
}
	