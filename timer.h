#define NVIC_ST_CTRL_R								(*((volatile unsigned long *)0xE000E010))
#define NVIC_ST_RELOAD_R							(*((volatile unsigned long *)0xE000E014))
#define NVIC_ST_CURRENT_R							(*((volatile unsigned long *)0xE000E018))	

void SysTick_Init();
void SysTick_Wait(unsigned long delay);
void SysTick_Wait_1ms(unsigned long delay);
void SysTick_Wait_1s(unsigned long factor);
void SysTick_Wait_1min(unsigned long number_of_minutes);