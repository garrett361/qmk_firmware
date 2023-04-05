#include QMK_KEYBOARD_H

#define THUMB_1 LT(NAV, KC_ENT)
#define THUMB_2 LT(NUM, KC_BSPC)
#define THUMB_3 LT(MOUSE, KC_ESC)
#define THUMB_4 LT(BOOT_1, KC_NO)
#define THUMB_5 KC_SPC
#define THUMB_6 LT(SYM_1, KC_TAB)

enum layers {QWERTY, NUM, NAV, SYM_1, MOUSE, BOOT_1, BOOT_2};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [QWERTY] = LAYOUT_garrett361(
        KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                               KC_Y,        KC_U,         KC_I,         KC_O,           KC_P,
        LCTL_T(KC_A), LALT_T(KC_S), LCMD_T(KC_D), LSFT_T(KC_F), KC_G,                               KC_H, RSFT_T(KC_J), RCMD_T(KC_K), LALT_T(KC_L), RCTL_T(KC_QUOT),
        KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,                               KC_N,        KC_M,         KC_COMM,      KC_DOT,         KC_SLSH,
        THUMB_1,      THUMB_2,      THUMB_3,                                                        THUMB_4,     THUMB_5,      THUMB_6
    ),
    [NUM] = LAYOUT_garrett361(
        _______,    _______,    _______,    _______,    _______,                               KC_PPLS,    KC_7,       KC_8,       KC_9,    CW_TOGG,
        _______,    _______,    _______,    _______,    _______,                               KC_PEQL,    KC_4,       KC_5,       KC_6,    KC_PMNS,
        _______,    _______,    _______,    _______,    _______,                               KC_PAST,    KC_1,       KC_2,       KC_3,    KC_BSLS,
                                _______,    _______,    _______,                               KC_UNDS,    KC_0,       _______
    ),
    [NAV] = LAYOUT_garrett361(
        _______,    _______,    _______,    _______,    _______,                               KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END,     _______,
        _______,    _______,    _______,    _______,    _______,                               KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT,    KC_TILD,
        _______,    _______,    _______,    _______,    _______,                               KC_PIPE,    KC_PERC,    KC_CIRC,    KC_DLR,     _______,
                                _______,    _______,    _______,                               _______,    _______,    _______
    ),
    [SYM_1] = LAYOUT_garrett361(
        _______,    KC_GRV,     KC_LCBR,    KC_RCBR,    _______,                               _______,    _______,    _______,    _______,    _______,
        KC_HASH,    KC_COLN,    KC_LPRN,    KC_RPRN,    KC_SCLN,                               _______,    _______,    _______,    _______,    _______,
        KC_EXLM,    KC_AT,      KC_LBRC,    KC_RBRC,    KC_AMPR,                               _______,    _______,    _______,    _______,    _______,
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

