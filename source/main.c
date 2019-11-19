/*	Author:David Perez dpere048
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #11  Exercise #1
 *	Exercise Description: [optional - include for your own benefit]
 
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#include <avr/interrupt.h>
#include "bit.h"
#include "timer.h"
#include "io.c"
#include "io.h"
#include "keypad.h"
#include "scheduler.h"
#include <stdio.h>
enum displayStates{display};
unsigned char tmpA = 0x00;
int displaySMTick(int state){
	unsigned char output;
	output = GetKeypadKey();
	switch(state){
		case display:
			switch(output){
				case '\0': tmpA = 0x1F; break;
				case '1': tmpA = 0x01; break;
				case '2': tmpB = 0x02; break;
				case '3': tmpB = 0x03; break;
				case '4': tmpB = 0x04; break;
				case '5': tmpB = 0x05; break;
				case '6': tmpB = 0x06; break;
				case '7': tmpB = 0x07; break;
				case '8': tmpB = 0x08; break;
				case '9': tmpB = 0x09; break;
				case 'A': tmpB = 0x0A; break;
				case 'B': tmpB = 0x0B; break;
				case 'C': tmpB = 0x0C; break;
				case 'D': tmpB = 0x0D; break;
				case '*': tmpB = 0x0E; break;
				case '0': tmpB = 0x00; break;
				case '#': tmpB = 0x0F; break;
			default: tmpA = 0x1B; break; //middle led off, never happens
		}
	state = display;
	PORTB = tmpA;
		break;
		}
}

int main(void) {
    /* Insert DDR and PORT initializations */

    /* Insert your solution below */
    while (1) {

    }
    return 1;
}
