#include QMK_KEYBOARD_H

#define MAC_RDO SCMD(KC_Z)
#define MAC_PST LCMD(KC_V)
#define MAC_CPY LCMD(KC_C)
#define MAC_CUT LCMD(KC_X)
#define MAC_UND LCMD(KC_Z)

enum layers {QWERTY, NUM, NAV, SYM_1, SYM_2, MOUSE, MISC};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *           ┌───┐                   ┌───┐
      *           │GUI├───┐           ┌───┤Alt│
      *           └───┤Bsp├───┐   ┌───┤Ent├───┘
      *               └───┤   │   │   ├───┘
      *                   └───┘   └───┘
      */
    [QWERTY] = LAYOUT_garrett361(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_QUOT,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
          LT(MOUSE, KC_ESC), LT(NUM, KC_BSPC), LT(NAV, KC_ENT),           LT(SYM_1, KC_TAB),  KC_SPC,  LT(SYM_2, KC_DEL)
    ),
    [NUM] = LAYOUT_garrett361(
        _______,    _______,    _______,    _______,    _______,                               _______,    KC_7,       KC_8,       KC_9,    _______,
        _______,    _______,    _______,    _______,    _______,                               _______,    KC_4,       KC_5,       KC_6,    _______,
        _______,    _______,    _______,    _______,    _______,                               _______,    KC_1,       KC_2,       KC_3,    _______,
                                _______,    _______,    _______,                               _______,    KC_0,       _______
    ),
    [NAV] = LAYOUT_garrett361(
        _______,    _______,    _______,    _______,    _______,                               KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END,     _______,
        _______,    _______,    _______,    _______,    _______,                               KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT,    _______,
        _______,    _______,    _______,    _______,    _______,                               _______,    _______,    _______,    _______,    _______,
                                _______,    _______,    _______,                               _______,    _______,    _______
    ),
    [SYM_1] = LAYOUT_garrett361(
        _______,    KC_SCLN,    KC_LCBR,    KC_RCBR,    _______,                               _______,    _______,    _______,    _______,    _______,
        KC_PAST,    KC_SCLN,    KC_LPRN,    KC_RPRN,    KC_UNDS,                               _______,    _______,    _______,    _______,    _______,
        _______,    KC_1,       KC_LBRC,    KC_RBRC,    _______,                               _______,    _______,    _______,    _______,    _______,
                                _______,    _______,    _______,                               _______,    LT(MISC, KC_NO),    _______
    ),
    [SYM_2] = LAYOUT_garrett361(
        _______,    KC_PIPE,    KC_HASH,    _______,    _______,                               _______,    _______,    _______,    _______,    _______,
        KC_AT,      KC_PERC,    KC_CIRC,    KC_DLR,     KC_GRV,                                _______,    _______,    _______,    _______,    _______,
        _______,    _______,    KC_TILD,    KC_BSLS,    _______,                               _______,    _______,    _______,    _______,    _______,
                                _______,    _______,    _______,                               _______,    _______,    _______
    ),
    [MOUSE] = LAYOUT_garrett361(
        _______,    _______,    _______,    _______,    _______,                               _______,    MAC_UND,    MAC_RDO,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,                               KC_MS_L,    KC_MS_D,    KC_MS_U,    KC_MS_R,    _______,
        _______,    _______,    _______,    _______,    _______,                               _______,    MAC_CPY,    MAC_PST,    MAC_CUT,    _______,
                                _______,    _______,    _______,                               KC_BTN3,    KC_BTN1,    KC_BTN2
    ),
    [MISC] = LAYOUT_garrett361(
        _______,    _______,    _______,    _______,    _______,                               _______,    _______,    _______,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,                               _______,    _______,    _______,    _______,    _______,
        _______,    _______,    _______,    _______,    _______,                               _______,    _______,    _______,    _______,    _______,
                                _______,    _______,    _______,                               _______,    _______,    QK_BOOT
    ),
};
