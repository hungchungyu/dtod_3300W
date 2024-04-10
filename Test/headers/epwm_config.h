/*
 * epwm_config.h
 *
 *  Created on: 2024¦~3¤ë28¤é
 *      Author: CHUNGYU.CY.HUNG
 */

#ifndef HEADERS_EPWM_CONFIG_H_
#define HEADERS_EPWM_CONFIG_H_

#include "F28x_Project.h "
#include "driverlib.h"
#include "device.h"
#include  "main.h"

#define EPWM_TIME_PERIOD ((UINT16)(MCU_SYSTEM_FREQ / SWITCH_FREQ))

void Init_EPWM(void);

#endif /* HEADERS_EPWM_CONFIG_H_ */
