#include "gpio_config.h"


void Init_GPIO(void)
{
    EALLOW;

    /*GPIO output*/
    GPIO_setPinConfig(GPIO_10_GPIO10);                  // GPIO Pinmux
    GPIO_writePin(GPIO_10, 0);                          // Initial GPIO value
    GPIO_setPadConfig(GPIO_10, GPIO_PIN_TYPE_STD);      // Push-pull or Open-drain
    GPIO_setQualificationMode(GPIO_10, GPIO_QUAL_SYNC);
    GPIO_setDirectionMode(GPIO_10, GPIO_DIR_MODE_OUT);  //GPIO output or input
    GPIO_setControllerCore(GPIO_10, GPIO_CORE_CPU1);

    /*GPIO input*/
    GPIO_setPinConfig(GPIO_11_GPIO11);
    GPIO_writePin(GPIO_11, 1);                                              // Initial GPIO value : High
    GPIO_setPadConfig(GPIO_11, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);   // Pull-up
    GPIO_setQualificationMode(GPIO_11, GPIO_QUAL_6SAMPLE);                  // Sample six times
    GPIO_setDirectionMode(GPIO_11, GPIO_DIR_MODE_IN);                       // GPIO input
    GPIO_setControllerCore(GPIO_11, GPIO_CORE_CPU1);

    EDIS;
}
