/*--------------timer methods and functionality------------------
*
*
*
*/

#include "Timer.h"
#include "Io.h"

void Clock_Delay(unsigned long delay){
NVIC_ST_CTRL_R = 0x00;
NVIC_ST_RELOAD_R = delay -1;
NVIC_ST_CURRENT_R = 0;
NVIC_ST_CTRL_R = 0x05;
while((NVIC_ST_CTRL_R & 0x00010000) == 0);
}
void Wait_1ms(int factor){
int i;
	for(i = 0; i < factor; i++) // 1ms * factor
		Clock_Delay(16000); //
}
void Wait_1sec(int factor){
	int i;
	for(i = 0; i < factor; i++)
		Wait_1ms(1000); //1 sec * factor
}
void Wait_1min(int number_of_minutes){
    for(int i = 0; i < number_of_minutes; i++)
		Wait_1sec(60); //wait 60sec = 1min
}
