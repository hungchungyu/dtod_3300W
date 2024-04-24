/*****************************************************************************/
/***** INCLUDES **************************************************************/
/*****************************************************************************/
#include "app_event.h"

/*****************************************************************************/
/***** VARIABLES *************************************************************/
/*****************************************************************************/
BIT EvtIsHpn, EvtIsRvy;

void event_EventIsMatch(WORD* StaAndTmr, WORD HpnMchPnt, WORD RvyMchPnt)
{
    if(EvtSta(*StaAndTmr))
    {
        /* Event Recovery */
        if(EvtIsRvy)
        {
            if((*StaAndTmr & 0x7FFF) >= RvyMchPnt) // Event recovers longer than the defining time.
            {
                ClrEvtSta(*StaAndTmr);  // Clear event status.
            }
        }
        else
        {
            SetEvtSta(*StaAndTmr);      // Set event status.
        }
    }
    else
    {
        /* Event Happen */
        if(EvtIsHpn)
        {
            if((*StaAndTmr & 0x7FFF) >= HpnMchPnt) // Event happens longer than the defining time.
            {
                SetEvtSta(*StaAndTmr);  // Set event status.
            }
        }
        else
        {
            ClrEvtSta(*StaAndTmr);      // Clear event status.
        }
    }
}
