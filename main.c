/*
 * File:   main.c
 * Author: Fiona Bianchi
 *
 * Created on 27 March 2016, 13:20
 */


#include <xc.h>
#include <pic16f628a.h>

// CONFIG
#pragma config FOSC = INTOSCIO  // Oscillator Selection bits (INTOSC oscillator: I/O function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN)
#pragma config WDTE = ON        // Watchdog Timer Enable bit (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = ON       // RA5/MCLR/VPP Pin Function Select bit (RA5/MCLR/VPP pin function is MCLR)
#pragma config BOREN = ON       // Brown-out Detect Enable bit (BOD enabled)
#pragma config LVP = ON         // Low-Voltage Programming Enable bit (RB4/PGM pin has PGM function, low-voltage programming enabled)
#pragma config CPD = OFF        // Data EE Memory Code Protection bit (Data memory code protection off)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)


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
