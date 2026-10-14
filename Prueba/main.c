#include "leds.h"

int main(){
    
    init_portc(); 
    
    while(1){
        led_on_off();   
    }
}