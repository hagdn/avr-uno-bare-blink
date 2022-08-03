#include <avr/io.h>
#include <util/delay.h>

int main(void) {
	DDRB |= (1 << DDB5); // Set PIN13 as an OUTPUT pin

	while(1) {
		PORTB |= (1 << PORTB5); // Turn ON PIN13 (0bxx1xxxxx)
		_delay_ms(200);
		PORTB &= ~(1 << PORTB5); // Turn OFF PIN13 (0bxx0xxxxx)
		_delay_ms(200);
	}
}
