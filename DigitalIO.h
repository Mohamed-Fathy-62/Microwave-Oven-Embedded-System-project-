/*------------methods in DigitalIO and their functionality------------

*void Pin_Init_Dir(char portName, unsigned char pinNumber, unsigned char dir)
->initialize the direction of specific pin as input(0) or output(1)

*void Port_Init_Dir(char portName, unsigned char dir)
->initialize the direction of a specific port as input(0) of output(1)

*void Port_Init(char portName)
->initialize the port by enable its clock and unlock the CR register and initialize the digital enable register

*void Pin_Write(char portName, unsigned char pinNumber, unsigned char data)
->write a data(0,1) on a specific pin of the given port

*void Port_Write(char portName, unsigned char data)
->write 8bits data on a specific port

*void Port_Write_L(char portName, unsigned char data)
->write 4bits data on 4LSB of a specific port pins(0,1,2,3)

*void Port_Write_M(char portName, unsigned char data)
->write 4bits data on 4MSB of a specific port pins(4,5,6,7)

*void Port_PUR_Enable(char portName, unsigned char data)
->enable the pull up resistance of the pins corresponding to the given mask
->Notice : this method clear the data in the register then write the new given data

*unsigned char Pin_Read(char portName, unsigned char pinNumber)
->return the value(0,1) of a specific pin from the given port

*void Pin_Toggle(char portName, unsigned char pinNumber)
-> toggle the value of a specific pin from the given port

*/
/*------------macros in DigitalIO and their functionality--------------
*	SET_BIT(reg,bit)   set the bit number(bit) of register(reg) to 1
*	CLR_BIT(reg,bit)   set the bit number(bit) of register(reg) to 0
*	TOG_BIT(reg,bit)   toggle the bit number(bit) of register(reg) change(0->1  1->0)
*	READ_BIT(reg,bit)  if the value is 1 then there is 1 at bit number(bit) of register(reg)
*/


void Pin_Init_Dir(char portName, unsigned char pinNumber, unsigned char dir);

void Port_Init_Dir(char portName, unsigned char dir);

void Port_Init(char portName);

void Pin_Write(char portName, unsigned char pinNumber, unsigned char data);

void Port_Write(char portName, unsigned char data);

void Port_Write_L(char portName, unsigned char data);

void Port_Write_M(char portName, unsigned char data);

void Port_PUR_Enable(char portName, unsigned char data);

unsigned char Pin_Read(char portName, unsigned char pinNumber);

void Pin_Toggle(char portName, unsigned char pinNumber);