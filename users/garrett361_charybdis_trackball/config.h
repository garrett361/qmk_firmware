// Copyright 2020 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

// NOTE: @garrett.goon - Important to use the trackball side as the master! https://discord.com/channels/681309835135811648/1181211966342172733/1184442372520681503
#define MASTER_RIGHT

// default but used in macros
#undef TAPPING_TERM
#define TAPPING_TERM 140

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Register holds when another key is pressed and released while a mod is held.
#define PERMISSIVE_HOLD


#define TAP_CODE_DELAY 0
#define TAPPING_TOGGLE 5

#define CAPS_WORD_IDLE_TIMEOUT  1500


// Bilateral Combinations, as implemented by https://github.com/qmk/qmk_firmware/compare/master...sunaku:miryoku_bilateral#files_bucket
#define BILATERAL_COMBINATIONS
#define BILATERAL_COMBINATIONS_ALLOW_CROSSOVER_AFTER 10   /* ms */
#define BILATERAL_COMBINATIONS_ALLOW_SAMESIDED_AFTER 100 /* ms */
#define BILATERAL_COMBINATIONS_TYPING_STREAK_TIMEOUT 150  /* ms */
#define BILATERAL_COMBINATIONS_TYPING_STREAK_MODMASK (~MOD_MASK_SHIFT)


// Mouse options
#define CHARYBDIS_MINIMUM_DEFAULT_DPI 500
#define CHARYBDIS_MINIMUM_SNIPING_DPI 300
#define CHARYBDIS_DRAGSCROLL_DPI 100
#define CHARYBDIS_DRAGSCROLL_BUFFER_SIZE 6
#define POINTING_DEVICE_AUTO_MOUSE_ENABLE
#ifdef POINTING_DEVICE_AUTO_MOUSE_ENABLE
    #define AUTO_MOUSE_TIME 1500
    #define AUTO_MOUSE_DELAY 1500
#endif
