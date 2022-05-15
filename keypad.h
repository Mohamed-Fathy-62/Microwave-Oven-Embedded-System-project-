#include "button.h"
#include "DigitalIO.h"
#define NO_PRESS  0xFF


/*
*Note:
*code is written suppossing that the keypad will be connected in portB
*from data sheet of keypad
*connect pin number 8765.... of the keypad to B0B1B2B3... respectively
*to keep the char mapping correct
*/
/*---------------methods in keypad and their functionality----------

*void Keypad_Init(char portName, unsigned char data)
-> initialize the port on which the keypad will be connected
->such as enable the pull up resistance and clock and so on

*unsigned char Keypad_Read()
->return the ASCII char pressed(char written on keypad) if it is pressed
-> or it return NO_PRESS constant which is used to indicate that no button is pressed

*/



void Keypad_Init(char portName);

unsigned char Keypad_Read();
