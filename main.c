#include <atmel_start.h>
#include "usb_start.h"

#include "FreeRTOS.h"
#include "FreeRTOSConfig.h"
#include "task.h"
#include "timers.h"

void blinkTask(void *pvParameters) {
    unsigned char buf[] = "AB";
    int ret;
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

int main(void)
{
    unsigned char good_str[] = "GOOD";
    unsigned char err_str[] = "ERR";
    /* Initializes MCU, drivers and middleware */
    atmel_start_init();

    composite_device_start();

    xTaskCreate(blinkTask, "BlinkTask", 200,
                (void *) NULL, 1, NULL);

    cdcdf_acm_write(good_str, 4);

    gpio_set_pin_level(D13, true);
    vTaskStartScheduler();
}

void vAssertCalled( void )
{
volatile unsigned long ul = 0;

        taskENTER_CRITICAL();
        {
                /* Set ul to a non-zero value using the debugger to step out of this
                function. */
                while( ul == 0 )
                {
                        __asm volatile( "NOP" );
                }
        }
        taskEXIT_CRITICAL();
}
