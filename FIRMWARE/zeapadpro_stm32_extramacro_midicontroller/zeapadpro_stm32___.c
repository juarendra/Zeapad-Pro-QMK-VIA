// Copyright 2022 Victor Lucachi (@victorlucachi)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "zeapadpro_stm32___.h"
#include "quantum.h"
#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
    {  3,      2,      1,      0, NO_LED },
    {  4,      5,      6,      7, NO_LED },
    {  11,      10,     9,     8, NO_LED },
    { 12,     13,     14,     15, NO_LED }
}, {
    {0  ,  0}, {75 ,  0}, {149,  0}, {224,  0},
    {0  , 21}, {75 , 21}, {149, 21}, {224, 21},
    {0  , 43}, {75 , 43}, {149, 43}, {224, 43},
    {0  , 64}, {75 , 64}, {149, 64}, {224, 64},
}, {
    1, 1, 1, 1,
    1, 4, 4, 1,
    1, 4, 4, 1,
    1, 1, 1, 1,
} };
#endif