#include "gpio_config.h"


void Init_GPIO(void)
{
    EALLOW;

    // GPIO10 -> myGPIO0 Pinmux
    GPIO_setPinConfig(GPIO_10_GPIO10);
    GPIO_writePin(myGPIO0, 1);
    GPIO_setPadConfig(myGPIO0, GPIO_PIN_TYPE_STD);
    GPIO_setQualificationMode(myGPIO0, GPIO_QUAL_SYNC);
    GPIO_setDirectionMode(myGPIO0, GPIO_DIR_MODE_OUT);
    GPIO_setControllerCore(myGPIO0, GPIO_CORE_CPU1);

    EDIS;
}
