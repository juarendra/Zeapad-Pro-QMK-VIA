#pragma once

//#include "config_common.h"
#define MATRIX_ROWS  4
#define MATRIX_COLS  5

// wiring of each half
#define MATRIX_ROW_PINS       { A6, A7, B0, C13 }
#define MATRIX_COL_PINS       { A2, A3, A4, A5, A1} // A virtual pin is needed for the encoder key matrix in via.

#define DIODE_DIRECTION COL2ROW

#define TAP_CODE_DELAY  10
#define ENCODER_DIRECTION_FLIP
/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
#define ENCODERS_PAD_A { C15 ,B8, B13}
#define ENCODERS_PAD_B { C14 ,B9, B15}
#define ENCODER_RESOLUTIONS       { 4 , 4, 4}
/* disable these deprecated features by default */

/* ws2812 RGB LED */
#define WS2812_DI_PIN B14 //D3 - underglow C7 - backlight
#define RGBLED_NUM 14    // Number of L

// ┌─────────────────────────────────────────────────┐
// │ o l e d s                                       │
// └─────────────────────────────────────────────────┘

#ifdef OLED_ENABLE
#    define OLED_DISPLAY_128X64
#    define SPLIT_OLED_ENABLE
#endif