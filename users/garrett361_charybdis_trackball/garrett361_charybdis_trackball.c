// clang-format off
#include QMK_KEYBOARD_H

#define THUMB_1 LT(NUM, KC_BSPC)
#define THUMB_2 LT(NAV, KC_ENT)
#define THUMB_3 LT(NUM, KC_ESC)
#define THUMB_4 LT(SYM_1, KC_TAB)
#define THUMB_5 KC_SPC
#define THUMB_6 KC_NO

enum layers {QWERTY, NUM, NAV, SYM_1, MOUSE, BOOT_1, BOOT_2};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [QWERTY] = LAYOUT_garrett361_charybdis_trackball(
        KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                               KC_Y,        KC_U,         KC_I,         KC_O,           KC_P,
        LCTL_T(KC_A), LALT_T(KC_S), LCMD_T(KC_D), LSFT_T(KC_F), KC_G,                               KC_H, RSFT_T(KC_J), RCMD_T(KC_K), LALT_T(KC_L), RCTL_T(KC_QUOT),
        LT(MOUSE, KC_Z),KC_X,       KC_C,         KC_V,         LT(BOOT_1, KC_B),              LT(BOOT_1, KC_N), KC_M,         KC_COMM,      KC_DOT,         KC_SLSH,
        THUMB_1,      THUMB_2,      THUMB_3,                                                        THUMB_4,     THUMB_5,      THUMB_6
    ),
    [NUM] = LAYOUT_garrett361_charybdis_trackball(
        _______,    _______,    _______,    _______,    _______,                               KC_PPLS,    KC_7,       KC_8,       KC_9,    CW_TOGG,
        _______,    _______,    _______,    _______,    _______,                               KC_PEQL,    KC_4,       KC_5,       KC_6,    KC_PMNS,
        _______,    _______,    _______,    _______,    _______,                               KC_PAST,    KC_1,       KC_2,       KC_3,    KC_BSLS,
                                _______,    _______,    _______,                               KC_UNDS,    KC_0,       _______
    ),
    [NAV] = LAYOUT_garrett361_charybdis_trackball(
        _______,    _______,    _______,    _______,    _______,                               KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END,     _______,
        _______,    _______,    _______,    _______,    _______,                               KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT,    KC_TILD,
        _______,    _______,    _______,    _______,    _______,                               KC_GRV,     KC_PERC,    KC_CIRC,    KC_DLR,     _______,
                                _______,    _______,    _______,                               _______,    _______,    _______
    ),
    [SYM_1] = LAYOUT_garrett361_charybdis_trackball(
        KC_ESC,     KC_AMPR,    KC_LCBR,    KC_RCBR,    _______,                               _______,    _______,    _______,    _______,    _______,
        KC_HASH,    KC_COLN,    KC_LPRN,    KC_RPRN,    KC_SCLN,                               _______,    _______,    _______,    _______,    _______,
        KC_EXLM,    KC_AT,      KC_LBRC,    KC_RBRC,    KC_PIPE,                               _______,    _______,    _______,    _______,    _______,
                                _______,    KC_DEL,     _______,                               _______,    _______,    _______
    ),
    [MOUSE] = LAYOUT_garrett361_charybdis_trackball(
        _______,    _______,    _______,    _______,    _______,                               _______,    _______,    _______,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,                               _______,    _______,    _______,    _______,    _______,
        _______,    _______,    SNP_TOG,    DRG_TOG,    _______,                              _______,    _______,    _______,    _______,    _______,
                                KC_BTN2,    KC_BTN1,    KC_BTN3,                               _______,    _______,    _______
    ),
    [BOOT_1] = LAYOUT_garrett361_charybdis_trackball(
        _______,    _______,    _______,    _______,    _______,                               _______,    _______,    _______,    _______,    _______,
        _______,    _______,    _______,    _______,    LT(BOOT_2, KC_NO),           LT(BOOT_2, KC_NO),    _______,    _______,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,                               _______,    _______,    _______,    _______,    _______,
                                _______,    _______,    _______,                               _______,    _______,    _______
    ),
    [BOOT_2] = LAYOUT_garrett361_charybdis_trackball(
        _______,    _______,    _______,    _______,    QK_BOOT,                               QK_BOOT,    _______,    _______,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,                               _______,    _______,    _______,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,                               _______,    _______,    _______,    _______,    _______,
                                _______,    _______,    _______,                               _______,    _______,    _______
    ),
};

#ifdef POINTING_DEVICE_AUTO_MOUSE_ENABLE
void pointing_device_init_user(void) {
    set_auto_mouse_layer(MOUSE);
    set_auto_mouse_enable(true);
}
#endif

// Disable mouse movement for 1.5 seconds after typing anything apart from mouse-related keys

unsigned int mouse_delay_ms = 1500;

uint16_t key_timer = 0;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (keycode != KC_BTN1 &&
        keycode != KC_BTN2 &&
        keycode != KC_BTN3 &&
        keycode != DRG_TOG &&
        keycode != SNP_TOG &&
        record->event.pressed) { key_timer = timer_read();}
    return true;
}

report_mouse_t pointing_device_task_user(report_mouse_t mouse_record) {
    if (timer_elapsed(key_timer) < mouse_delay_ms) {
        mouse_record.x = 0;
        mouse_record.y = 0;
    }
    return mouse_record;
}
// clang-format on
