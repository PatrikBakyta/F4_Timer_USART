/*
 * timer.h
 *
 *  Created on: 3. 12. 2016
 *      Author: Patrik Bakyta
 */

#ifndef TIMER_H_
#define TIMER_H_

void initLED(void);

void initTIMER(TIM_TypeDef* Timer, uint16_t TimerVal);
void EnableTimerInterrupt(void);
extern "C" void TIM2_IRQHandler(void);

void initUSART(void);

#endif /* TIMER_H_ */
