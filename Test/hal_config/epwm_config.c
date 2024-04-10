/*
 * epwm_config.c
 *
 *  Created on: 2024¦~3¤ë28¤é
 *      Author: CHUNGYU.CY.HUNG
 */

#include "epwm_config.h"

void Init_EPWM(void)
{
    EALLOW;

    //
    // Setup TBCLK
    //
    EPwm4Regs.TBPRD = EPWM_TIME_PERIOD - 1;
    EPwm4Regs.TBPHS.bit.TBPHS = 0;
    EPwm4Regs.TBCTR = 0;

    //
    // Set Compare values
    //
    EPwm4Regs.CMPA.bit.CMPA = EPWM_TIME_PERIOD * DUTY_MAX_DEFAULT;

    //
    // Setup counter mode
    //
    EPwm4Regs.TBCTL.bit.CTRMODE = 0;        // Up-count mode

    EPwm4Regs.TBCTL.bit.PHSEN = 0;          // Disable phase loading

    EPwm4Regs.TBCTL.bit.SYNCOSEL = 3;        // Sync output select
                                            // 3:define by TBCTL2

    EPwm4Regs.TBCTL2.bit.SYNCOSELX = 0;     // Disable Sync signal

    EPwm4Regs.TBCTL.bit.HSPCLKDIV = 0;      // Clock ratio to SYSCLKOUT
    EPwm4Regs.TBCTL.bit.CLKDIV = 0;         // 0:/1

    EPwm4Regs.TBCTL.bit.FREE_SOFT = 0x03;   //

    EDIS;
}


