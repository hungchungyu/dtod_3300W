/*
 * gpio_config.c
 *
 *  Created on: 2024¦~3¤ë28¤é
 *      Author: CHUNGYU.CY.HUNG
 */
#include "gpio_config.h"


void Init_GPIO(void)
{
    EALLOW;
/*********************************** Init output GPIO pins ****************************************************/

    GpioDataRegs.GPACLEAR.bit.GPIO8 = 1;    // GPIO Output Clear
                                            // 0:ignore
                                            // 1:clear

    GpioCtrlRegs.GPACSEL2.bit.GPIO8 = 0;    // Master Core Select
                                            // 0:master¡B1:CLA master

    GpioCtrlRegs.GPAPUD.bit.GPIO8 = 0;      // GPIO Pull-Up
                                            // 0:enabled
                                            // 1:disabled

    GpioDataRegs.GPASET.bit.GPIO8 = 0;      // Load output latch

    GpioCtrlRegs.GPADIR.bit.GPIO8 = 1;      // GPIO Direction
                                            // 0:input
                                            // 1:output

    GpioCtrlRegs.GPAMUX1.bit.GPIO8 = 0;     // 00
    GpioCtrlRegs.GPAGMUX1.bit.GPIO8 = 0;    // 00
                                            // GPIO

    GpioCtrlRegs.GPAODR.bit.GPIO8 = 0;      // GPIO Output Mode
                                            // 0:push-pull output
                                             // 1:Open Drain output

/*******************************************************************************************************/
/*********************************** Init output GPIO pins ****************************************************/

    GpioDataRegs.GPACLEAR.bit.GPIO11 = 1;   // GPIO Output Clear
                                            // 0:ignore
                                            // 1:clear

    GpioCtrlRegs.GPACSEL2.bit.GPIO11 = 0;    // Master Core Select
                                             // 0:master¡B1:CLA master

    GpioCtrlRegs.GPAPUD.bit.GPIO11 = 0;      // GPIO Pull-Up
                                             // 0:enabled
                                             // 1:disabled

    GpioDataRegs.GPASET.bit.GPIO11 = 0;      // Load output latch

    GpioCtrlRegs.GPADIR.bit.GPIO11 = 1;      // GPIO Direction
                                             // 0:input
                                             // 1:output

    GpioCtrlRegs.GPAMUX1.bit.GPIO11 = 0;     // 00
    GpioCtrlRegs.GPAGMUX1.bit.GPIO11 = 0;    // 00
                                             // GPIO

    GpioCtrlRegs.GPAODR.bit.GPIO11 = 0;      // GPIO Output Mode
                                             // 0:push-pull output
                                             // 1:Open Drain output

/********************************************************************************************************/
/*********************************** Init input GPIO pins ****************************************************/

    GpioCtrlRegs.GPAPUD.bit.GPIO10 = 0;      // GPIO Pull-Up
                                             // 0:enabled
                                             // 1:disabled

    GpioCtrlRegs.GPADIR.bit.GPIO10 = 0;      // GPIO Direction
                                             // 0:input
                                             // 1:output

    GpioCtrlRegs.GPAMUX1.bit.GPIO10 = 0;     // 00
    GpioCtrlRegs.GPAGMUX1.bit.GPIO10 = 0;    // 00
                                             // GPIO

    GpioCtrlRegs.GPACTRL.bit.QUALPRD1 = 0;  // GPIO Qualification Sampling Period
                                             // QUALPRD1:GPIO8-GPIO15
                                             // 0:0 SYSCLK cycles
                                             // 1:2 SYSCLK cycles

    GpioCtrlRegs.GPAQSEL1.bit.GPIO10 = 3;   // GPIO Qualification Type

/********************************************************************************************************/
/*********************************** Init epwm pins ****************************************************/
    // Disable internal pull-up for the selected output pins
    // for reduced power consumption

    GpioCtrlRegs.GPAPUD.bit.GPIO4 = 1;      // Disable pull-up on GPIO9

    GpioCtrlRegs.GPAGMUX1.bit.GPIO4 = 0;    // Configure as EPWM6A
    GpioCtrlRegs.GPAMUX1.bit.GPIO4 = 1;

/********************************************************************************************************/
    EDIS;
}

