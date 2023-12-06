// Copyright 2020 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

// default but used in macros
#undef TAPPING_TERM
#define TAPPING_TERM 140

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Register holds when another key is pressed and released while a mod is held.
#define PERMISSIVE_HOLD

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64

#define TAP_CODE_DELAY 0
#define TAPPING_TOGGLE 5

#define CAPS_WORD_IDLE_TIMEOUT  1500


// Bilateral Combinations, as implemented by https://github.com/qmk/qmk_firmware/compare/master...sunaku:miryoku_bilateral#files_bucket
#define BILATERAL_COMBINATIONS
#define BILATERAL_COMBINATIONS_ALLOW_CROSSOVER_AFTER 10   /* ms */
#define BILATERAL_COMBINATIONS_ALLOW_SAMESIDED_AFTER 100 /* ms */
#define BILATERAL_COMBINATIONS_TYPING_STREAK_TIMEOUT 150  /* ms */
#define BILATERAL_COMBINATIONS_TYPING_STREAK_MODMASK (~MOD_MASK_SHIFT)

/* Copied from various wylder config.h's below */

// Dactyl Manuform Hotswap
#pragma once

//#include "config_common.h"
// Basic Config

#ifndef WYLD_QMK_FIRMWARE_CONFIG_H
#define WYLD_QMK_FIRMWARE_CONFIG_H

#endif // WYLD_QMK_FIRMWARE_CONFIG_H


#define USE_SERIAL
#define SPLIT_HAND_PIN      GP26  // high = left, low = right

#define SPLIT_LAYER_STATE_ENABLE
// Using Serial instead of I2C
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
#define SERIAL_PIO_USE_PIO0
#define SERIAL_USART_TIMEOUT     100  // USART driver timeout. default 100
#define SERIAL_USART_SPEED 921600
//#define SERIAL_USART_PIN_SWAP

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED_MASK 0U

/* key matrix size */
// Columns are doubled-up
#define MATRIX_ROWS 8
#define MATRIX_COLS 5

#define MATRIX_COL_PINS_RIGHT { GP6, GP5, GP4, GP3, GP2 }
#define MATRIX_COL_PINS { GP6, GP7, GP4, GP3, GP2 }
#define MATRIX_ROW_PINS { GP9, GP10, GP11, GP12 }

#define DIODE_DIRECTION COL2ROW

#define SPLIT_POINTING_ENABLE
#define ROTATIONAL_TRANSFORM_ANGLE  -25
#define POINTING_DEVICE_INVERT_Y
#define POINTING_DEVICE_RIGHT
#define PMW33XX_CS_PIN GP21
#define POINTING_DEVICE_TASK_THROTTLE_MS 1
#define PMW33XX_LIFTOFF_DISTANCE 0x02
#define POINTING_DEVICE_AUTO_MOUSE_ENABLE
// only required if not setting mouse layer elsewhere
//#define AUTO_MOUSE_DEFAULT_LAYER 3
//
#define DYNAMIC_KEYMAP_LAYER_COUNT 4

#define SPLIT_TRANSACTION_IDS_KB RPC_ID_KB_CONFIG_SYNC







// Misc settings
// Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap
#define LOCKING_SUPPORT_ENABLE
// Locking resynchronize hack
#define LOCKING_RESYNC_ENABLE
// Enables This makes it easier for fast typists to use dual-function keys
#define PERMISSIVE_HOLD

/* mouse config */
#define MOUSEKEY_INTERVAL    20
#define MOUSEKEY_DELAY       0
#define MOUSEKEY_TIME_TO_MAX 60
#define MOUSEKEY_MAX_SPEED   7
#define MOUSEKEY_WHEEL_DELAY 0



#define DEBOUNCE 5
/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Enables This makes it easier for fast typists to use dual-function keys */
#define PERMISSIVE_HOLD

#define SPLIT_POINTING_ENABLE
//#define ROTATIONAL_TRANSFORM_ANGLE  -25
#define PMW33XX_CS_PIN GP21
//#define POINTING_DEVICE_CS_PIN GP21

#define SPLIT_TRANSACTION_IDS_KB RPC_ID_KB_CONFIG_SYNC

#define CHARYBDIS_MINIMUM_DEFAULT_DPI 1200
#define CHARYBDIS_DEFAULT_DPI_CONFIG_STEP 400
#define CHARYBDIS_MINIMUM_SNIPING_DPI 400
#define CHARYBDIS_SNIPING_DPI_CONFIG_STEP 200
#define CHARYBDIS_DRAGSCROLL_DPI 200
#define CHARYBDIS_POINTER_ACCELERATION_ENABLE



#ifndef WYLD_QMK_FIRMWARE_CONFIG_H
#define WYLD_QMK_FIRMWARE_CONFIG_H

#endif // WYLD_QMK_FIRMWARE_CONFIG_H
//#define BOOTMAGIC_LITE_ROW 0        // TOP RIGHT KEY ON RIGHT SIDE, TOP LEFT KEY ON LEFT SIDE
//#define BOOTMAGIC_LITE_COLUMN 4

//#define PRODUCT_ID 0x0002

#define USE_SERIAL
#define SPLIT_HAND_PIN      GP26  // high = left, low = right

#define SPLIT_LAYER_STATE_ENABLE
// Using Serial instead of I2C
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
#define SERIAL_PIO_USE_PIO0
#define SERIAL_USART_TIMEOUT     100  // USART driver timeout. default 100
#define SERIAL_USART_SPEED 921600
//#define SERIAL_USART_PIN_SWAP

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED_MASK 0U

/* key matrix size */
// Columns are doubled-up
#define MATRIX_ROWS 8
#define MATRIX_COLS 5

#define MATRIX_COL_PINS_RIGHT { GP6, GP5, GP4, GP3, GP2 }
#define MATRIX_COL_PINS { GP6, GP7, GP4, GP3, GP2 }
#define MATRIX_ROW_PINS { GP9, GP10, GP11, GP12 }
//#define MATRIX_COL_PINS_RIGHT { GP6, GP5, GP4, GP3, GP2, GP8 }  // Added GP7 so each has 6 columns
//#define MATRIX_ROW_PINS_RIGHT { GP9, GP10, GP11, GP12, GP13 }

#define DIODE_DIRECTION COL2ROW

#define SPLIT_POINTING_ENABLE
#define ROTATIONAL_TRANSFORM_ANGLE  -25
#define POINTING_DEVICE_INVERT_Y
#define POINTING_DEVICE_RIGHT
#define PMW33XX_CS_PIN GP21
#define POINTING_DEVICE_TASK_THROTTLE_MS 1
#define PMW33XX_LIFTOFF_DISTANCE 0x02
#define POINTING_DEVICE_AUTO_MOUSE_ENABLE
// only required if not setting mouse layer elsewhere
//#define AUTO_MOUSE_DEFAULT_LAYER 3
//
#define DYNAMIC_KEYMAP_LAYER_COUNT 4

#define SPLIT_TRANSACTION_IDS_KB RPC_ID_KB_CONFIG_SYNC

#ifdef ENCODER_ENABLE
#define ENCODERS_PAD_A { }
#define ENCODERS_PAD_B { }
#define ENCODER_RESOLUTIONS { }
#define ENCODERS_PAD_A_RIGHT { GP16 }
#define ENCODERS_PAD_B_RIGHT { GP17 }
#define ENCODER_RESOLUTIONS_RIGHT { 2 }
#endif

//#define CHARYBDIS_MINIMUM_DEFAULT_DPI 1200
//#define CHARYBDIS_DEFAULT_DPI_CONFIG_STEP 200
//#define CHARYBDIS_MINIMUM_SNIPING_DPI 400
//#define CHARYBDIS_SNIPING_DPI_CONFIG_STEP 200

//// Rotary Encoder ////
// GP21
// GP22

//// Sensor Notes ////
//// Pi Pico pins ////
// 3V3  -- Power (not 3v3_EN!)
// GP21 -- CS pin
// GP20 -- MISO pin
// GP19 -- MOSI pin
// GP18 -- SCK pin clock
// GND  -- GND

// WS2812 RGB LED strip input and number of LEDs
//#ifdef RGBLIGHT_ENABLE
//#define RGB_DI_PIN GP17
//#define RGBLED_NUM 34
////#define DRIVER_LED_TOTAL 34
//#define RGBLED_SPLIT { 17, 17 }
//#define STM32_SYSCLK KINETIS_SYSCLK_FREQUENCY
//#define NOP_FUDGE 0.4
//#endif

//// OLED Pins and Driver
#ifdef OLED_ENABLE
#define I2C_DRIVER I2CD0
#define I2C1_SDA_PIN GP16
#define I2C1_SCL_PIN GP17
// OLED Options
#define SPLIT_OLED_ENABLE
//#define SPLIT_MODS_ENABLE
#define SPLIT_WPM_ENABLE
#define OLED_DISPLAY_WIDTH 128
#define OLED_DISPLAY_HEIGHT 32
#define OLED_MATRIX_SIZE 512
#define OLED_RESET -1
#define OLED_DISPLAY_ADDRESS 0x3C
#define OLED_BRIGHTNESS 255
#define OLED_TIMEOUT 32000
#define OLED_FADE_OUT
#define OLED_FADE_OUT_INTERVAL 0
#endif

// Misc settings
// Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap
#define LOCKING_SUPPORT_ENABLE
// Locking resynchronize hack
#define LOCKING_RESYNC_ENABLE
// Enables This makes it easier for fast typists to use dual-function keys
#define PERMISSIVE_HOLD
// End of Basic Config
