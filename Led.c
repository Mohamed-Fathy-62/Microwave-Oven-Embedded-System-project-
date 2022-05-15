#include "Led.h"


void Led_Init(char portName, unsigned char pinNumber)
{
	
	Pin_Init_Dir(portName, pinNumber, 1);
}

void Led_On(char portName, unsigned char pinNumber)
{
	Pin_Write(portName, pinNumber, 1);
}


void Led_Off(char portName, unsigned char pinNumber)
{
	Pin_Write(portName, pinNumber, 0);
}

void Led_Tog(char portName, unsigned char pinNumber)
{
	Pin_Write(portName, pinNumber, !Pin_Read(portName, pinNumber));
}