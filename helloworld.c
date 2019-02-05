/**
 * Simple program for Arduino nano (atmega328p). Turns on light on
 * digital pin 13.
 * 
 * @author Charlie Friend
 */

#include <avr/io.h>
#include <util/delay.h>

int main()
{
    DDRB = 0xFF;
    PORTB = 0xFF;

    while (1);
}
