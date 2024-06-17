#pragma once

//#include "config_common.h"
#define MATRIX_ROWS  4
#define MATRIX_COLS  5

#define WEAR_LEVELING_LOGICAL_SIZE 4096
#define WEAR_LEVELING_BACKING_SIZE 8192
#define DYNAMIC_KEYMAP_MACRO_COUNT 32

// wiring of each half
#define MATRIX_ROW_PINS       { A6, A7, B0, B1 }
#define MATRIX_COL_PINS       { A2, A3, A4, A5, A1} // A virtual pin is needed for the encoder key matrix in via.

#define DIODE_DIRECTION COL2ROW

#define TAP_CODE_DELAY  10
//#define ENCODER_DIRECTION_FLIP
/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
#define ENCODERS_PAD_A { C13, B12 ,B15}
#define ENCODERS_PAD_B { C14, B8 ,B13}
#define ENCODER_RESOLUTIONS       { 4 , 4, 4}
/* disable these deprecated features by default */

#define WS2812_DI_PIN B14 //D3 - underglow C7 - backlight
#define RGBLED_NUM 14    // Number of L

// ┌─────────────────────────────────────────────────┐
// │ o l e d s                                       │
// └─────────────────────────────────────────────────┘

#ifdef OLED_ENABLE
#    define OLED_DISPLAY_128X64
#    define SPLIT_OLED_ENABLE
#endif
#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_SWIRL+2

// Disabling some of these is a good way to save flash space.
#    define RGBLIGHT_EFFECT_ALTERNATING     // 108
#    define RGBLIGHT_EFFECT_RGB_TEST        // 158
#    define RGBLIGHT_EFFECT_RAINBOW_MOOD    // 160
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT // 168
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL   // 192
#    define RGBLIGHT_EFFECT_BREATHING       // 348
#    define RGBLIGHT_EFFECT_KNIGHT          // 336
#    define RGBLIGHT_EFFECT_SNAKE           // 406
#    define RGBLIGHT_EFFECT_CHRISTMAS       // 508
/*
#define RGBLIGHT_EFFECT_TWINKLE         // 1156
*/
#endif