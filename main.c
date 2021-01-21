#include <atmel_start.h>



int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	while (1) {
		//Toggle Blue LED
		gpio_toggle_pin_level(BLUELED);
				
		// delay
		delay_ms(1000);
		
	}
}
