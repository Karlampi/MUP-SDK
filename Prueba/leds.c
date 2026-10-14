#include <stm32f10x.h>

void init_portc(void){
    RCC->APB2ENR |= (1 << 4);
    
		GPIOC->CRH &= ~(0xF << 20); 
    GPIOC->CRH |= (1 << 21);
}

void delay(int tiempo){
    volatile int i, j;
    for(i = 0; i < tiempo; i++){
    for(j = 0; j < 1000; j++){
        }
    }
}

void led_on_off(void){
    GPIOC->ODR ^= (1 << 13);
    delay(1000); 
}