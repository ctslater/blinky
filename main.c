#include <atmel_start.h>
#include "usb_start.h"

int main(void)
{
    
    char buf[] = "AB";
    int ret;
    /* Initializes MCU, drivers and middleware */
    atmel_start_init();

    composite_device_start();

    while (1) {
        gpio_set_pin_level(D13, false);
        if (cdcdf_acm_is_enabled()) {
            ret = cdcdf_acm_write(buf, 2);
        }
        delay_ms(1000);
        gpio_set_pin_level(D13, true);
        delay_ms(1000);
    }
}
