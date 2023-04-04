#include QMK_KEYBOARD_H
#include "features/achordion.h"

#define THUMB_1 LT(NAV, KC_ENT)
#define THUMB_2 LT(NUM, KC_BSPC)
#define THUMB_3 LT(MOUSE, KC_ESC)
#define THUMB_4 LT(BOOT_1, KC_NO)
#define THUMB_5 KC_SPC
#define THUMB_6 LT(SYM_1, KC_TAB)

enum layers {QWERTY, NUM, NAV, SYM_1, MOUSE, BOOT_1, BOOT_2};

enum combos {
  THUMB_PMNS,
  THUMB_UNDS,
  COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH; // remove the COMBO_COUNT define and use this instead!

const uint16_t PROGMEM pmns_combo[] = {THUMB_5, THUMB_2, COMBO_END};
const uint16_t PROGMEM unds_combo[] = {THUMB_5, THUMB_1, COMBO_END};

combo_t key_combos[] = {
  [THUMB_PMNS] = COMBO(pmns_combo, KC_PMNS),
  [THUMB_UNDS] = COMBO(unds_combo, KC_UNDS),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [QWERTY] = LAYOUT_garrett361(
        KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                               KC_Y,        KC_U,         KC_I,         KC_O,            KC_P,
        LCTL_T(KC_A), LALT_T(KC_S), LCMD_T(KC_D), LSFT_T(KC_F), KC_G,                               KC_H,RSFT_T(KC_J), RCMD_T(KC_K), LALT_T(KC_L), RCTL_T(KC_QUOT),
        KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,                               KC_N,        KC_M,         KC_COMM,       KC_DOT,         KC_SLSH,
        THUMB_1,      THUMB_2,      THUMB_3,                                                        THUMB_4,     THUMB_5,      THUMB_6
    ),
    [NUM] = LAYOUT_garrett361(
        _______,    _______,    _______,    _______,    _______,                               KC_HASH,    KC_7,       KC_8,       KC_9,    _______,
        _______,    _______,    _______,    _______,    _______,                               KC_GRV,     KC_4,       KC_5,       KC_6,    CW_TOGG,
        _______,    _______,    _______,    _______,    _______,                               KC_EXLM,    KC_1,       KC_2,       KC_3,    KC_BSLS,
                                _______,    _______,    _______,                               _______,    KC_0,       _______
    ),
    [NAV] = LAYOUT_garrett361(
        _______,    _______,    _______,    _______,    _______,                               KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END,     _______,
        _______,    _______,    _______,    _______,    _______,                               KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT,    KC_TILD,
        _______,    _______,    _______,    _______,    _______,                               KC_PIPE,    KC_PERC,    KC_CIRC,    KC_DLR,     _______,
                                _______,    _______,    _______,                               _______,    _______,    _______
    ),
    [SYM_1] = LAYOUT_garrett361(
        _______,    KC_PPLS,    KC_PEQL,    KC_PAST,    KC_AMPR,                               _______,    _______,    _______,    _______,    _______,
        KC_LCBR,    KC_COLN,    KC_LPRN,    KC_RPRN,    KC_SCLN,                               _______,    _______,    _______,    _______,    _______,
        KC_RCBR,    KC_AT,      KC_LBRC,    KC_RBRC,    _______,                               _______,    _______,    _______,    _______,    _______,
                                _______,    KC_DEL,     _______,                               _______,    _______,    _______
    ),
    [MOUSE] = LAYOUT_garrett361(
        _______,    _______,    _______,    _______,    _______,                               _______,    _______,    _______,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,                               KC_MS_L,    KC_MS_D,    KC_MS_U,    KC_MS_R,    _______,
        _______,    _______,    _______,    _______,    _______,                               _______,    _______,    _______,    _______,    _______,
                                _______,    _______,    _______,                               KC_BTN3,    KC_BTN1,    KC_BTN2
    ),
    [BOOT_1] = LAYOUT_garrett361(
        _______,    _______,    _______,    _______,    _______,                               _______,    _______,    _______,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,                               _______,    _______,    _______,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,                               _______,    _______,    _______,    _______,    _______,
                                _______,    _______,    _______,                               _______,    LT(BOOT_2, KC_NO),    _______
    ),
    [BOOT_2] = LAYOUT_garrett361(
        _______,    _______,    _______,    _______,    _______,                               _______,    _______,    _______,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,                               _______,    _______,    _______,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,                               _______,    _______,    _______,    _______,    _______,
                                _______,    _______,    _______,                               _______,    _______,    QK_BOOT
    ),
};

