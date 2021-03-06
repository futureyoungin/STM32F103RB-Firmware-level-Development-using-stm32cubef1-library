/*
 * hw.h
 *
 *  Created on: 2020. 9. 14.
 *      Author: MCES
 */

#ifndef SRC_HW_HW_H_
#define SRC_HW_HW_H_



#endif /* SRC_HW_HW_H_ */

#include "hw_def.h"
#include "core/led.h"
#include "core/button.h"
#include "core/uart.h"

void hwInit(void);

void delay(uint32_t time_ms);

uint32_t millis(void);
