/*****************************************************************************/
/***** INCLUDES **************************************************************/
/*****************************************************************************/
#include "app_device_state.h"

/*****************************************************************************/
/***** VARIABLES *************************************************************/
/*****************************************************************************/
static event_handler_t pvHandleEvent;

static void state_SMHandlerInit(event_handler_t initial_state)
{
    pvHandleEvent = initial_state;
}

static void state_Standby(eStateEvent eEvent)
{

}

void state_InitStateMachine(void)
{
    state_SMHandlerInit(state_Standby);
    state_ReportEvent(EVENT_ON_ENTRY);
}

void state_ReportEvent(eStateEvent eEvent)
{
    (*pvHandleEvent)(eEvent);
}
