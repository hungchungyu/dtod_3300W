/*****************************************************************************/
/***** INCLUDES **************************************************************/
/*****************************************************************************/
#include "data_type_lib.h"

/*****************************************************************************/
/***** MACROS ****************************************************************/
/*****************************************************************************/
#define EvtSta(Reg)     TestBit((Reg), 15)
#define SetEvtSta(Reg)  (Reg) = 0x8000
#define ClrEvtSta(Reg)  (Reg) = 0x0000

/*****************************************************************************/
/***** VARIABLES *************************************************************/
/*****************************************************************************/
typedef enum
{
    /* Universal Events */
    EVENT_NULL,
    EVENT_ON_ENTRY,
    EVENT_ON_EXIT,
    EVENT_STATE_TIMER,

    /* Common Events */
    EVENT_VIN_SWOVP,
    EVENT_VIN_SWUVP,
    EVENT_VBULK_SWOVP,
    EVENT_VBULK_SWUVP,
    EVENT_VBULK_HWOVP,
    EVENT_IIN_SWOCP,
    EVENT_PIN_SWOPP,
    EVENT_IPHASE_HWOCP,
    EVENT_IPHASE_IMBALANCE,
    EVENT_TMAIN_SWOTP,
    EVENT_TINPUT_SWOTP,
    EVENT_ORING_IC_OCP,
    EVENT_ORING_IC_OTP,
    EVENT_BOOST_OFF,

    /* Standby Events */
    EVENT_START_SM_OK,

    /* Pre-charge Events */
    EVENT_PRECHARGE_OK,

    /* Soft Start Events */
    EVENT_PRECHARGE_NOT_OK,
    EVENT_SOFTSTART_OK,
    EVENT_VBULK_OK,                 // Not used.
    EVENT_CLOSEDLOOP_CURRENT_OK,    // Only for current closed-loop test.
    EVENT_OPENLOOP_DUTY_OK,         // Only for duty open-loop test.

    /* Normal Operation Events */

    /* Shutdown Events */
    EVENT_RESET,

} eStateEvent;

typedef void (*event_handler_t)(eStateEvent eNewEvent);


/*****************************************************************************/
/***** PUBLIC FUNCTIONS DECLATION ********************************************/
/*****************************************************************************/
void event_EventIsMatch(WORD* StaAndTmr, WORD HpnMchPnt, WORD RvyMchPnt);

