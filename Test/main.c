#include "F28x_Project.h "
#include "driverlib.h"
#include "device.h"
#include  "main.h"
#include "board.h"

int dac_value = 4090;
bool gpio_data = 0;
int state = 0;

void main(void)
{

    // Initialize device clock and peripherals
    Device_init();

    // Initialize GPIO and configure the GPIO pin as a push-pull output
    Device_initGPIO();
//    GPIO_setPadConfig(DEVICE_GPIO_PIN_LED1, GPIO_PIN_TYPE_STD);
//    GPIO_setDirectionMode(DEVICE_GPIO_PIN_LED1, GPIO_DIR_MODE_OUT);
    // Initialize PIE and clear PIE registers. Disables CPU interrupts.
    Interrupt_initModule();
    // Initialize the PIE vector table with pointers to the shell Interrupt
    // Service Routines (ISR).
    Interrupt_initVectorTable();

    // Enable Global Interrupt (INTM) and realtime interrupt (DBGM)
    EINT;
    ERTM;

    EALLOW;
    DacaRegs.DACCTL.bit.LOADMODE   = 0;
    DacaRegs.DACCTL.bit.DACREFSEL  = 1;
    DacaRegs.DACCTL.bit.MODE       = 1;
    DacaRegs.DACOUTEN.bit.DACOUTEN = 1;
    DacaRegs.DACVALS.bit.DACVALS   = 0;


    DacbRegs.DACCTL.bit.LOADMODE   = 0;
    DacbRegs.DACCTL.bit.DACREFSEL  = 0;
    DacbRegs.DACCTL.bit.MODE       = 0;
    DacbRegs.DACOUTEN.bit.DACOUTEN = 1;
    DacbRegs.DACVALS.bit.DACVALS   = 2048;
    EDIS;
    Board_init();
//    Init_GPIO();
//    Init_EPWM();
//    EPWM_setPeriodLoadMode(0,1);

    // Loop Forever
    for(;;)
    {

        switch(state)
        {
             case 1:
                 EALLOW;

                 GpioDataRegs.GPADAT.bit.GPIO8 = 1;
                 DEVICE_DELAY_US(1);
                 gpio_data = GpioDataRegs.GPADAT.bit.GPIO10;
                 GpioDataRegs.GPADAT.bit.GPIO11 = gpio_data;

                 EDIS;
                 state = 2;
                 break;
             case 2:
                 EALLOW;

                 GpioDataRegs.GPADAT.bit.GPIO8 = 0;
                 DEVICE_DELAY_US(1);
                 gpio_data = GpioDataRegs.GPADAT.bit.GPIO10;
                 GpioDataRegs.GPADAT.bit.GPIO11 = gpio_data;

                 EDIS;
                 state = 1;
                 break;
             case 3:
                 EALLOW;

                 EDIS;

                 break;

        }

        if(dac_value<=4095)
            dac_value++;
        else
            dac_value = 0;

        EALLOW;
        DacaRegs.DACVALS.bit.DACVALS = dac_value;
        EDIS;
        // Turn on LED
//        GPIO_writePin(DEVICE_GPIO_PIN_LED1, 0);
//        // Delay for a bit.
//        DEVICE_DELAY_US(500000);
//        // Turn off LED
//        GPIO_writePin(DEVICE_GPIO_PIN_LED1, 1);
//        // Delay for a bit.
        DEVICE_DELAY_US(100);    // 500 ms
    }
}
