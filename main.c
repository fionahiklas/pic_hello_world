/*
 * File:   main.c
 * Author: Fiona Bianchi
 *
 * Created on 27 March 2016, 13:20
 */


#include <xc.h>
#include <pic16f628a.h>



void delay(int delay) {
    while(--delay) {
        delay = delay;
    }
}

void main(void) {
    TRISA0 = 0;
    TRISA1 = 0;
        
    while(1) {
        PORTA = 0x03;
                
        delay(10000);
        
        PORTA = 0x00;
        
        delay(10000);
    }
}
