/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>

#include <platform.h>
#include "drivers/io.h"

#include "drivers/timer.h"
#include "drivers/timer_def.h"

const timerHardware_t timerHardware[USABLE_TIMER_CHANNEL_COUNT] = {

    DEF_TIM(TIM2, CH1, PA0, TIM_USE_PWM,   0 ), // PWM1 - RC1
    DEF_TIM(TIM2, CH2, PA1, TIM_USE_PWM,   0 ), // PWM2 - RC2
    DEF_TIM(TIM2, CH3, PA2, TIM_USE_PWM,   0 ), // PWM3 - RC3
    DEF_TIM(TIM2, CH4, PA3, TIM_USE_PWM,   0 ), // PWM4 - RC4
    DEF_TIM(TIM1, CH1, PA8, TIM_USE_PWM,   0 ), // PWM6 - RC5
    DEF_TIM(TIM1, CH4, PA11,TIM_USE_PWM,   0 ), // PWM6 - RC6

    DEF_TIM(TIM3, CH3, PB0, TIM_USE_MOTOR, 1 ), // PWM11 - OUT1
    DEF_TIM(TIM4, CH4, PB9, TIM_USE_MOTOR, 1 ), // PWM14 - OUT2
    DEF_TIM(TIM3, CH4, PB1, TIM_USE_MOTOR, 1 ), // PWM12 - OUT3
    DEF_TIM(TIM4, CH3, PB8, TIM_USE_MOTOR, 1 ), // PWM13 - OUT4
    

};

