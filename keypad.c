//#include "button.h"
#include "DigitalIO.h"
#define NO_PRESS  0xFF

void Keypad_Init(char portName){
	Port_Init(portName);
	Port_Init_Dir(portName, 0x0F);  //iiiioooo //rrrrcccc
	Port_PUR_Enable(portName, 0xF0);
}

/*
*Note:
*code is written suppossing that the keypad will be connected in portB
*from data sheet of keypad
*connect pin number 8765.... of the keypad to B0B1B2B3... respectively
*to keep the char mapping correct
*/

unsigned char Keypad_Read(unsigned char portName){
	unsigned char button_to_char_mapping[4][4] =
	{ {'1','2','3','A'},
		{'4','5','6','B'},
		{'7','8','9','C'},
		{'*','0','#','D'}
	};
	int row, col, button;
	for(row = 0; row < 4; row++){
		Port_Write_L(portName, 0xFF); //propagate 1 in rows
		Pin_Write(portName, row, 0); // but propagate 0 inside a specific row i know
		for(col = 0; col < 4; col++){
			button = Pin_Read(portName, 4 + col);
				if(button == 0){ // if 0 is detected in a specific col i know then i know which row and col is pressed
						//button from col is presesed
						return button_to_char_mapping[row][col];
				}
		}
	}
	return NO_PRESS; //if you loop over every button and no button is pressed then return no press constant
}
