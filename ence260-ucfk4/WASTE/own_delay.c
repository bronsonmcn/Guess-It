#include <avr/io.h>
#include "system.h"


void own_delay_init(){
    TCCR1A = 0x00;
    TCCR1B = 0x05;
    TCCR1C = 0x00;
}	

void own_delay_wait(int TIME){
	TCNT1 = 0;
    while (TCNT1 < TIME) {}
}
    
