#include "ergodox_ez.h"
#include "debug.h"
#include "action_layer.h"

#define BASE 0 // default layer
#define SYMB 1 // symbols
#define MDIA 2 // media keys

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 * NOT ASSINGED : PIPE
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * | \ |    |   1  |   2  |   3  |   4  |   5  |  =   |           |  @   |   6  |   7  |   8  |   9  |   0  |   -    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | TAB    |   Q  |   W  |   E  |   R  |   T  | ZKHK |           | KANA |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | CTL    |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |' / Cmd |
 * |--------+------+------+------+------+------| DEL  |           | DEL  |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |//Ctrl| RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | ~L1  |  '"  | LAlt | Cmd  | INS  |                                       | Grv  | Alt  |   [  |   ]  | ~L1  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | Home | End  |       | Left | Rght |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | PgUp |       | Up   |        |      |
 *                                 | Space| ENT/ |------|       |------|  BSPC  |Enter |
 *                                 |      |   L2 | PgDn |       | Down |        |      |
 *                                 `--------------------'       `----------------------'
 */
// If it accepts an argument (i.e, is a function), it doesn't need KC_.
// Otherwise, it needs KC_*
[BASE] = KEYMAP(  // layer 0 : default
        // left hand
        KC_JYEN,         KC_1,    KC_2,    KC_3,    KC_4,   KC_5, KC_EQL,
        KC_TAB,          KC_Q,    KC_W,    KC_E,    KC_R,   KC_T, KC_ESC,
        KC_LALT,        KC_A,    KC_S,    KC_D,    KC_F,   KC_G,
        KC_LSFT,         KC_Z,    KC_X,    KC_C,    KC_V,   KC_B, KC_DELT,
        KC_FN1, KC_INS , KC_LCTRL, KC_LGUI, KC_GRV,
                                                  KC_HOME,                 KC_END,
                                                                           KC_PGUP,
                                                  KC_SPC,  LT(MDIA,KC_ENT),KC_PGDN,
        // right hand
             KC_LBRC,  KC_6,   KC_7,   KC_8,    KC_9,    KC_0,           KC_MINS,
             KC_KANA, KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,            KC_BSLS,
                       KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN       , GUI_T(KC_QUOT),
             KC_DELT,  KC_N,   KC_M,   KC_COMM, KC_DOT,  CTL_T(KC_SLSH), KC_RSFT,
                               KC_LANG1, KC_RALT, KC_RBRC, KC_BSPC,        KC_FN1,
             KC_LEFT,KC_RGHT,
             KC_UP,
             KC_DOWN,KC_BSLS, KC_ENT
    ),
/* Keymap 1: Symbol Layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |  ESC   |  F1  |  F2  |  F3  |  F4  |  F5  |  @   |           |      |  F6  |  F7  |  F8  |  F9  |  F10 |   F11  |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           | APP  |      |   7  |   8  |   9  |   *  |   F12  |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |------|           |------|      |   4  |   5  |   6  |   +  | Ctl+@  |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |   &  |   1  |   2  |   3  |   \  |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |   0  |    . |      |   =  |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// SYMBOLS
[SYMB] = KEYMAP(
       // left hand
       KC_GRV ,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_AT,
       KC_ZKHK,KC_RO,KC_KANA,KC_JYEN,KC_HENK,KC_MHEN,KC_INT7,
       KC_INT8,KC_INT9,KC_INT1,KC_LANG1,KC_LANG2,KC_LANG3,
       KC_LANG4,KC_LANG5,KC_LANG6,KC_LANG7,KC_LANG8,KC_LANG9,KC_LANG1,
       KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
                                       KC_TRNS,KC_TRNS,
                                               KC_TRNS,
                               KC_TRNS,KC_TRNS,KC_TRNS,
       // right hand
       KC_TRNS, KC_F6,   KC_F7,  KC_F8,   KC_F9,   KC_F10,  KC_F11,
       KC_APP , KC_TRNS,   KC_7,   KC_8,    KC_9,    KC_ASTR, KC_F12,
       KC_TRNS, KC_4,   KC_5,    KC_6,    KC_PLUS, LCTL(KC_LBRC),
       KC_TRNS, KC_AMPR, KC_1,   KC_2,    KC_3,    KC_SLSH, KC_TRNS,
                         KC_0,   KC_DOT,  KC_TRNS, KC_EQL,  KC_TRNS,
       KC_TRNS, KC_TRNS,
       KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS
),

/* Keymap 2: Media and mouse keys
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * | RESET  | CALC | MYCM |SEARCH|B-BACK|B-FWD |B-REF |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      | END  |      |      | WhUp |           |      |      |      | MUp  |      |  UP  |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        | HOME |      | DELT | RGHT |      |------|           |------| BSPC |MLeft |MDown |MRight|      |        |
 * |--------+------+------+------+------+------|WhDown|           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      | LEFT |      |           |      | DOWN |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|RClick|LClick|
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// MEDIA AND MOUSE
[MDIA] = KEYMAP(
       RESET,   KC_CALC, KC_MYCM, KC_WSCH, KC_WBAK, KC_WFWD, KC_WREF,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_END,  KC_TRNS, KC_TRNS, KC_WH_U,
       KC_TRNS, KC_HOME, KC_TRNS, KC_DELT, KC_RGHT, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_WH_D,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                           KC_TRNS, KC_TRNS,
                                                    KC_TRNS,
                                  KC_TRNS, KC_TRNS, KC_TRNS,
    // right hand
       KC_TRNS,  KC_TRNS, KC_TRNS,       KC_TRNS,       KC_TRNS, KC_TRNS, KC_PSCR,
       KC_TRNS,  KC_TRNS, KC_TRNS,       KC_MS_U,       KC_TRNS, KC_UP,   KC_TRNS,
                 KC_BSPC, KC_MS_L,       KC_MS_D,       KC_MS_R, KC_TRNS, KC_TRNS,
       KC_LEFT,  KC_DOWN, KC_TRNS,       KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,
                          KC_TRNS,       KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS,
       KC_TRNS,
       KC_TRNS, KC_BTN2, KC_BTN1
),

};

const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_TAP_TOGGLE(SYMB)                // FN1 - Momentary Layer 1 (Symbols)
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
        if (record->event.pressed) {
          register_code(KC_RSFT);
        } else {
          unregister_code(KC_RSFT);
        }
        break;
      }
    return MACRO_NONE;
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      // TODO: Make this relevant to the ErgoDox EZ.
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        default:
            // none
            break;
    }

};
