#define NVIC_ST_CTRL_R							(*((volatile unsigned long *)0xE000E010))
#define NVIC_ST_RELOAD_R							(*((volatile unsigned long *)0xE000E014))
#define NVIC_ST_CURRENT_R							(*((volatile unsigned long *)0xE000E018))	

void SysTich_Init();
void SysTich_Wait(unsigned long delay);
void SysTich_Wait1ms(unsigned long delay);