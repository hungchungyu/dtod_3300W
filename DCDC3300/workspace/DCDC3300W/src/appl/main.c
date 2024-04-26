/*****************************************************************************/
//  File Name:      main.c
//----------------------------------------------------------------------
//  Corporation:    Delta
//  Business Unit:  PSBG HPLOB
//  Originator:     CY
//  Other Authors:
//----------------------------------------------------------------------
//  Compiler:       Texas Instruments Code Composer Studio 12.1.0
//  MCU:            Texas Instruments TMS320F280049
//----------------------------------------------------------------------
//  History:
//      2024/04/19  Established.
//
/*****************************************************************************/


/*****************************************************************************/
/***** INCLUDES **************************************************************/
/*****************************************************************************/
#include "F28x_Project.h"
#include "driverlib.h"
#include "device.h"
#include "board.h"
#include "main.h"
/*****************************************************************************/
/***** MACROS ****************************************************************/
/*****************************************************************************/

/*****************************************************************************/
/***** FUNCTIONS DECLARATION *************************************************/
/*****************************************************************************/

/*****************************************************************************/
/***** VARIABLES *************************************************************/
/*****************************************************************************/
long cnt = 0;

int main(void)
{

    //
    // Initialize device clock and peripherals
    //
    Device_init();

    //
    // Disable pin locks and enable internal pull-ups.
    //
    Device_initGPIO();

    //
    // Initialize PIE and clear PIE registers. Disables CPU interrupts.
    //
    Interrupt_initModule();

    //
    // Initialize the PIE vector table with pointers to the shell Interrupt
    // Service Routines (ISR).
    //
    Interrupt_initVectorTable();

    Init_System();
    Init_Peripherals();


    while(1)
    {

        if(CPUTimer_getTimerOverflowStatus(CPUTIMER0_BASE)==1)
        {
            CPUTimer_clearOverflowFlag(CPUTIMER0_BASE);
            EALLOW;
            GPIO_togglePin(10);
            EDIS;
        }


    }
}
