#include "cputimer_config.h"


void Init_CPUTimer(void)
{
    EALLOW;

    CPUTimer_setEmulationMode(CPUTIMER0_BASE, CPUTIMER_EMULATIONMODE_STOPAFTERNEXTDECREMENT);
    CPUTimer_setPreScaler(CPUTIMER0_BASE, 0U);
    CPUTimer_setPeriod(CPUTIMER0_BASE, 100U);
    CPUTimer_disableInterrupt(CPUTIMER0_BASE);
    CPUTimer_stopTimer(CPUTIMER0_BASE);

    CPUTimer_reloadTimerCounter(CPUTIMER0_BASE);
    CPUTimer_startTimer(CPUTIMER0_BASE);

    EDIS;
}
