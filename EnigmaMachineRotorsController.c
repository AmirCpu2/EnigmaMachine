
/*****************************************************
Project : Enigma Machin-Rotors controller
Author  : Amircpu
Company : Hope Techy
GitHub : Amircpu2
Chip type           : ATmega8
Clock frequency     : 8.000000 MHz
*****************************************************/

#include <stdio.h>
#include<mega8.h>
#define xtal 8000000

void initialize()
{
	DDRA = 0X0F;
	DDRC = 0X00;
	DDRD = 0X00;

	PORTA = 0X00;
	PORTC = 0X00;
	PORTD = 0XC0;
}

int main()
{
	

	//Config init
	initialize();

	
    	return 0;
}
