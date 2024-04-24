/*****************************************************************************/
/***** INCLUDES **************************************************************/
/*****************************************************************************/
#include "app_event.h"


/*****************************************************************************/
/***** PRIVATE FUNCTIONS DECLARATION *****************************************/
/*****************************************************************************/
static void state_SMHandlerInit(event_handler_t initial_state);
static void state_Standby(eStateEvent eEvent);
void state_InitStateMachine(void);
void state_ReportEvent(eStateEvent eEvent);
/*****************************************************************************/
/***** VARIABLES *************************************************************/
/*****************************************************************************/
