/*
 * main.h
 *
 *  Created on: 2024¦~3¤ë28¤é
 *      Author: CHUNGYU.CY.HUNG
 */

#ifndef HEADERS_MAIN_H_
#define HEADERS_MAIN_H_



#include "math_lib.h"
#include "data_type_lib.h"
#include "gpio_config.h"
#include "epwm_config.h"



#define MCU_SYSTEM_FREQ             (100 * MATH_MEGA)
#define SWITCH_FREQ                 (150 * MATH_KILO)
#define DUTY_MAX_DEFAULT            0.9
#define EPWM_TIME_PERIOD            (UINT16)(MCU_SYSTEM_FREQ / SWITCH_FREQ)

#endif /* HEADERS_MAIN_H_ */
