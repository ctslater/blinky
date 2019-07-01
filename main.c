#include <atmel_start.h>


int main(void)
{
    
    int i;
    /* Initializes MCU, drivers and middleware */
    atmel_start_init();

    /* Replace with your application code */
    while (1) {
        gpio_set_pin_level(D13, false);
        delay_ms(1000);
        gpio_set_pin_level(D13, true);
        delay_ms(1000);
    }
}
