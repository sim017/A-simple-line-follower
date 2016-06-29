/*
 * GccApplication8.c
 *
 * Created: 29-06-2016 16:42:49
 * Author : simran
 */ 

/* A simple code for a line follower. The settings for the leds are inbuilt ,therefore there is no code to set the leds on a given colored line in this code.
The bot here follows the black line and thus the leds are on when they sense the black line*/
#include <avr/io.h>
#include <avr/sfr_defs.h>

int main(void)
{
	DDRA = 0b00000000;
	DDRB |=0b00011110;
	
	
	while(1)
	{
		
		
		if (bit_is_set(PINA,3) && bit_is_set(PINA,4) && bit_is_set(PINA,5) && bit_is_clear(PINA,1)&& bit_is_clear(PINA,2)&& bit_is_clear(PINA,6)&& bit_is_clear(PINA,7))
		{
			PORTB |= 1<<PINB1 | 1<<PINB3;
			PORTB &= ~(1<<PINB2);
			PORTB &= ~(1<<PINB4);
		}
		else if (bit_is_set(PINA,3) && bit_is_set(PINA,4) && bit_is_clear(PINA,1) && bit_is_clear(PINA,2) && bit_is_clear(PINA,5) && bit_is_clear(PINA,6) && bit_is_clear(PINA,7))
		{
			PORTB |= 1<<PINB1 | 1<<PINB3;
			PORTB &= ~(1<<PINB2);
			PORTB &= ~(1<<PINB4);
		}
		else if (bit_is_set(PINA,4) && bit_is_set(PINA,5)&& bit_is_clear(PINA,1)&& bit_is_clear(PINA,2)&& bit_is_clear(PINA,3)&& bit_is_clear(PINA,6)&& bit_is_clear(PINA,7))
		{
			PORTB |= 1<<PINB1 | 1<<PINB3;
			PORTB &= ~(1<<PINB2);
			PORTB &= ~(1<<PINB4);
		}
		
		else if (bit_is_set(PINA,2) && bit_is_set(PINA,3) && bit_is_set(PINA,4)&& bit_is_clear(PINA,1)&& bit_is_clear(PINA,5)&& bit_is_clear(PINA,6)&& bit_is_clear(PINA,7))
		{
			PORTB |= 1<<PINB3 ;
			PORTB &= ~(1<<PINB2);
			PORTB &= ~(1<<PINB1);
			PORTB &= ~(1<<PINB4);
		}
		else if (bit_is_set(PINA,2) && bit_is_set(PINA,3) && bit_is_set(PINA,1)&& bit_is_clear(PINA,4)&& bit_is_clear(PINA,5)&& bit_is_clear(PINA,6)&& bit_is_clear(PINA,7))
		{
			PORTB |= 1<<PINB2  | 1<<PINB3;
			PORTB &= ~(1<<PINB1);
			PORTB &= ~(1<<PINB4);
		}
		else if (bit_is_set(PINA,2) && bit_is_set(PINA,3)&& bit_is_clear(PINA,1)&& bit_is_clear(PINA,4)&& bit_is_clear(PINA,5)&& bit_is_clear(PINA,6)&& bit_is_clear(PINA,7))
		{
			PORTB |= 1<<PINB3 ;
			PORTB &= ~(1<<PINB2);
			PORTB &= ~(1<<PINB1);
			PORTB &= ~(1<<PINB4);
		}
		else if (bit_is_set(PINA,2) && bit_is_set(PINA,1)&& bit_is_clear(PINA,3)&& bit_is_clear(PINA,4)&& bit_is_clear(PINA,5)&& bit_is_clear(PINA,6)&& bit_is_clear(PINA,7))
		{
			PORTB |= 1<<PINB3 ;
			PORTB &= ~(1<<PINB2);
			PORTB &= ~(1<<PINB1);
			PORTB &= ~(1<<PINB4);
		}
		else if (bit_is_set(PINA,4) && bit_is_set(PINA,5) && bit_is_clear(PINA,6)&& bit_is_clear(PINA,7)&& bit_is_clear(PINA,3)&& bit_is_clear(PINA,2)&& bit_is_clear(PINA,1))
		{
			PORTB |= 1<<PINB1 ;
			PORTB &= ~(1<<PINB2);
			PORTB &= ~(1<<PINB3);
			PORTB &= ~(1<<PINB4);
			
		}
		else if (bit_is_set(PINA,5) && bit_is_clear(PINA,6) && bit_is_set(PINA,7)&& bit_is_clear(PINA,1)&& bit_is_clear(PINA,2)&& bit_is_clear(PINA,3)&& bit_is_clear(PINA,4))
		{
			PORTB |= 1<<PINB1 | 1<<PINB4 ;
			PORTB &= ~(1<<PINB3);
			PORTB &= ~(1<<PINB4);
		}
		else if (bit_is_set(PINA,5) && bit_is_clear(PINA,6)&& bit_is_clear(PINA,7)&& bit_is_clear(PINA,4)&& bit_is_clear(PINA,3)&& bit_is_clear(PINA,2)&& bit_is_clear(PINA,1))
		{
			PORTB |= 1<<PINB1 ;
			PORTB &= ~(1<<PINB2);
			PORTB &= ~(1<<PINB3);
			PORTB &= ~(1<<PINB4);
		}
		else if (bit_is_clear(PINA,6) && bit_is_set(PINA,7)&& bit_is_clear(PINA,1)&& bit_is_clear(PINA,2)&& bit_is_clear(PINA,3)&& bit_is_clear(PINA,4)&& bit_is_clear(PINA,5))
		{
			PORTB |= 1<<PINB1 ;
			PORTB &= ~(1<<PINB2);
			PORTB &= ~(1<<PINB3);
			PORTB &= ~(1<<PINB4);
		}
		else if (bit_is_set(PINA,1) && bit_is_set(PINA,2)&& bit_is_set(PINA,3)&& bit_is_set(PINA,4)&& bit_is_clear(PINA,5)&& bit_is_clear(PINA,6)&& bit_is_clear(PINA,7))
		{
			PORTB |= 1<<PINB2  | 1<<PINB3;
			PORTB &= ~(1<<PINB1);
			PORTB &= ~(1<<PINB4);
		}
		else if (bit_is_set(PINA,5) && bit_is_set(PINA,2)&& bit_is_set(PINA,3)&& bit_is_set(PINA,4)&& bit_is_clear(PINA,1)&& bit_is_clear(PINA,6)&& bit_is_clear(PINA,7))
		{
			PORTB |= 1<<PINB3 ;
			PORTB &= ~(1<<PINB2);
			PORTB &= ~(1<<PINB1);
			PORTB &= ~(1<<PINB4);
		}
		else if (bit_is_set(PINA,5) && bit_is_set(PINA,7)&& bit_is_set(PINA,3)&& bit_is_set(PINA,4)&& bit_is_clear(PINA,1)&& bit_is_clear(PINA,6)&& bit_is_clear(PINA,2))
		{
			PORTB |= 1<<PINB1 ;
			PORTB &= ~(1<<PINB2);
			PORTB &= ~(1<<PINB3);
			PORTB &= ~(1<<PINB4);
		}
		else if (bit_is_set(PINA,5) && bit_is_clear(PINA,6)&& bit_is_set(PINA,7)&& bit_is_set(PINA,4)&& bit_is_clear(PINA,1)&& bit_is_clear(PINA,3)&& bit_is_clear(PINA,2))
		{
			PORTB |= 1<<PINB1 | 1<<PINB4 ;
			PORTB &= ~(1<<PINB3);
			PORTB &= ~(1<<PINB4);
		}
		else if (bit_is_set(PINA,1) && bit_is_set(PINA,2)&& bit_is_set(PINA,3)&& bit_is_set(PINA,4)&& bit_is_set(PINA,5)&& bit_is_clear(PINA,6)&& bit_is_clear(PINA,7))
		{
			PORTB |= 1<<PINB3 ;
			PORTB &= ~(1<<PINB2);
			PORTB &= ~(1<<PINB1);
			PORTB &= ~(1<<PINB4);
		}
		else if (bit_is_clear(PINA,6) && bit_is_set(PINA,2)&& bit_is_set(PINA,3)&& bit_is_set(PINA,4)&& bit_is_set(PINA,5)&& bit_is_clear(PINA,1)&& bit_is_clear(PINA,7))
		{
			PORTB |= 1<<PINB1 | 1<<PINB3;
			PORTB &= ~(1<<PINB2);
			PORTB &= ~(1<<PINB4);
		}
		else if (bit_is_clear(PINA,6) && bit_is_set(PINA,7)&& bit_is_set(PINA,3)&& bit_is_set(PINA,4)&& bit_is_set(PINA,5)&& bit_is_clear(PINA,1)&& bit_is_clear(PINA,2))
		{
			PORTB |= 1<<PINB1 ;
			PORTB &= ~(1<<PINB2);
			PORTB &= ~(1<<PINB3);
			PORTB &= ~(1<<PINB4);
		}
		else if (bit_is_set(PINA,1) && bit_is_set(PINA,2)&& bit_is_set(PINA,3)&& bit_is_set(PINA,4)&& bit_is_set(PINA,5)&& bit_is_clear(PINA,6)&& bit_is_clear(PINA,7))
		{
			PORTB |= 1<<PINB3 ;
			PORTB &= ~(1<<PINB2);
			PORTB &= ~(1<<PINB1);
			PORTB &= ~(1<<PINB4);
		}
		else if (bit_is_set(PINA,7) && bit_is_set(PINA,2)&& bit_is_set(PINA,3)&& bit_is_set(PINA,4)&& bit_is_set(PINA,5)&& bit_is_clear(PINA,6)&& bit_is_clear(PINA,1))
		{
			PORTB |= 1<<PINB1 ;
			PORTB &= ~(1<<PINB2);
			PORTB &= ~(1<<PINB3);
			PORTB &= ~(1<<PINB4);
		}
		
		else {//default condition
			PORTB |= 1<<PINB1 | 1<<PINB3;
			PORTB &= ~(1<<PINB2);
			PORTB &= ~(1<<PINB4);
		}
		
	}
}

