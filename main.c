#include <atmel_start.h>
#include "atmel_start_pins.h"
#include "usb_start.h"
#include "driver_examples.h"



int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	usb_init();
	cdcd_acm_example();	
	/* Replace with your application code */
	while (1) {
		//Toggle Blue LED
		gpio_toggle_pin_level(LED);
						
		// delay
		delay_ms(1000);
		//
		//io_write(0x82,"test",sizeof("test"))
		
			
;
}
}
