/* Copyright 2015-2017 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "muse.h"

enum preonic_layers {
  _QWERTY = 0,
  _DFLT_1,
  _DFLT_2,
  _LOWER,
  _RAISE,
  _ADJUST,
  _COMBOS
};

enum preonic_keycodes {
  QWERTY = SAFE_RANGE,
  DFLT_1,
  DFLT_2,
  LOWER,
  RAISE,
  ADJUST,
  COMBOS
};

/* Desktop Switching Definitions */
#define L_DSKTP LCTL(LGUI(KC_LEFT))
#define R_DSKTP LCTL(LGUI(KC_RIGHT))

/* Control Combo Definitions */
#define CTL_A LCTL(KC_A)
#define CTL_S LCTL(KC_S)
#define CTL_D LCTL(KC_D)
#define CTL_F LCTL(KC_F)
#define CTL_Z LCTL(KC_Z)
#define CTL_X LCTL(KC_X)
#define CTL_C LCTL(KC_C)
#define CTL_V LCTL(KC_V)
#define CTRL_Y LCTL(KC_Y)  /* not currently assigned */
#define TASKMAN LCTL(LSFT(KC_ESC))

/* Shift Combo Definitions */
#define SHFT_HME LSFT(KC_HOME)
#define SHFT_END LSFT(KC_END)
#define SFTALT_UP LSFT(LALT(KC_UP))
#define SFTALT_DN LSFT(LALT(KC_DOWN))

/* Teams Combo Definitions */
#define TMS_MUTE LCTL(LSFT(KC_M))

/* Windows Combo Definitions */
#define WIN_LOCK LGUI(KC_L)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | ESC/~|   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |  \   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Ctl  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |<-DSK |DSK ->| GUI  | Alt  |Lower |    Space    |Raise | Left |  Up  | Down |Right |
 * `-----------------------------------------------------------------------------------'
 */
	[_QWERTY] = LAYOUT_preonic_1x2uC(
        KC_GESC,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_BSLS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC,
        KC_LCTL,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_ENT,
        L_DSKTP,  R_DSKTP,  KC_LGUI,  KC_LALT,  LOWER,         KC_SPC,        RAISE,    KC_LEFT,  KC_UP,    KC_DOWN,  KC_RGHT),

/* Default 1
 * ,-----------------------------------------------------------------------------------.
 * | ESC/~|   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |  \   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Ctl  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |<-DSK |DSK ->| GUI  | Alt  |Lower |    Space    |Raise | Left |  Up  | Down |Right |
 * `-----------------------------------------------------------------------------------'
 */
	[_DFLT_1] = LAYOUT_preonic_1x2uC(
        KC_GESC,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_BSLS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC,
        KC_LCTL,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_ENT,
        L_DSKTP,  R_DSKTP,  KC_LGUI,  KC_LALT,  LOWER,         KC_SPC,        RAISE,    KC_LEFT,  KC_UP,    KC_DOWN,  KC_RGHT),

/* Default 2
 * ,-----------------------------------------------------------------------------------.
 * | ESC/~|   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |  \   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Ctl  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |<-DSK |DSK ->| GUI  | Alt  |Lower |    Space    |Raise | Left |  Up  | Down |Right |
 * `-----------------------------------------------------------------------------------'
 */
	[_DFLT_2] = LAYOUT_preonic_1x2uC(
        KC_GESC,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_BSLS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC,
        KC_LCTL,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_ENT,
        L_DSKTP,  R_DSKTP,  KC_LGUI,  KC_LALT,  LOWER,         KC_SPC,        RAISE,    KC_LEFT,  KC_UP,    KC_DOWN,  KC_RGHT),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * | `/~  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   7  |   8  |   9  |   =  | Del  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | TRNS |  F7  |  F8  |  F9  | F10  | F11  | F12  |   4  |   5  |   6  |   +  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Caps |Ctrl+A|Ctrl+S|Ctrl+D|Ctrl+F|  KC  |  KC  |   1  |   2  |   3  |   -  |  "   |
 * |      |      |      |      |      | _NLCK| _SLCK|      |      |      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|Ctrl+Z|Ctrl+X|Ctrl+C|Ctrl+V| TRNS | TRNS |   0  |   0  |   .  |SHFTHM|SHFTEN|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |COMBOS| TRNS | TRNS | TRNS | TRNS |    LGUI+L   |ADJUST| Home | PgUp | PGDn |  End |
 * `-----------------------------------------------------------------------------------'
 */
	[_LOWER] = LAYOUT_preonic_1x2uC(
        KC_GRV,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_KP_7,  KC_KP_8,  KC_KP_9,  KC_PEQL,  KC_DEL,
        KC_TRNS,  KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_KP_4,  KC_KP_5,  KC_KP_6,  KC_PPLS,  KC_PAST,
        KC_CAPS,  CTL_A,    CTL_S,    CTL_D,    CTL_F,    KC_NLCK,  KC_SLCK,  KC_KP_1,  KC_KP_2,  KC_KP_3,  KC_PMNS,  KC_PSLS,
        KC_TRNS,  CTL_Z,    CTL_X,    CTL_C,    CTL_V,    KC_TRNS,  KC_TRNS,  KC_KP_0,  KC_KP_0,  KC_PDOT,  SHFT_HME, SHFT_END,
        COMBOS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,       WIN_LOCK,      ADJUST,   KC_HOME,  KC_PGUP,  KC_PGDN,  KC_END),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * | `/~  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  | TRNS | TRNS |   (  |   )  | Del  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | TRNS |  F7  |  F8  |  F9  | F10  | F11  | F12  |   +  |   -  |   {  |   }  | TRNS |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Caps |   (  |   {  |   }  |   )  |   ?  | TRNS |   =  |   _  |   [  |   ]  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | TRNS |   \  |   [  |   ]  |   /  |   |  | TRNS | TRNS |   \  |   <  |   >  |   /  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |COMBOS| TRNS |   <  |   >  |ADJUST|    LGUI+L   | TRNS | Next | VolUp| VolDn| Play |
 * `-----------------------------------------------------------------------------------'
 */
	[_RAISE] = LAYOUT_preonic_1x2uC(
        KC_GRV,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_TRNS,  KC_TRNS,  KC_LPRN,  KC_RPRN,  KC_DEL,
        KC_TRNS,  KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PLUS,  KC_PMNS,  KC_LCBR,  KC_RCBR,  KC_TRNS,
        KC_CAPS,  KC_LPRN,  KC_LCBR,  KC_RCBR,  KC_RPRN,  KC_QUES,  KC_TRNS,  KC_EQL,   KC_UNDS,  KC_LBRC,  KC_RBRC,  KC_DQUO,
        KC_TRNS,  KC_BSLS,  KC_LBRC,  KC_RBRC,  KC_SLSH,  KC_PIPE,  KC_TRNS,  KC_TRNS,  KC_LBRC,  KC_LT,    KC_GT,    KC_RBRC,
        COMBOS,   KC_TRNS,  KC_LT,    KC_GT,    ADJUST,        WIN_LOCK,      KC_TRNS,  KC_MNXT,  KC_VOLU,  KC_VOLD,  KC_MPLY),

/* Adjust
 * ,-----------------------------------------------------------------------------------.
 * | Reset|DFLT_1|DFLT_2| TRNS | TRNS | TRNS | TRNS | TRNS | TRNS | TRNS |QWERTY| Debug|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | RGB  |  BL  |  BL  |  BL  |  BL  |  BL  | RGB  | RGB  | RGB  | TERM | TERM | TRNS |
 * |TOGGLE|TOGGLE|  ON  |  OFF |BREATH|CYCLE |MODE P|MODE B|MODE R|  ON  | OFF  |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | RGB  | HUE  | SAT  |BRIGHT|EFFECT|EFFECT| RGB  | RGB  | RGB  |  AU  |  AU  | TRNS |
 * |MODE +|  +   |  +   |  +   |  +   |  +   |MODESW|MODESN|MODE K|  ON  |  OFF |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | RGB  | HUE  | SAT  |BRIGHT|EFFECT|EFFECT| RGB  | RGB  | RGB  |  MU  |  MU  |  MU  |
 * |MODE -|  +   |  -   |  -   |  -   |  -   |MODE X|MODE G|MODE T|  ON  |  OFF |  MOD |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | TRNS | TRNS | TRNS | TRNS | TRNS |     TRNS    | TRNS | TRNS | TRNS | TRNS | TRNS |
 * `-----------------------------------------------------------------------------------'
 */
	[_ADJUST] = LAYOUT_preonic_1x2uC(
        RESET,    DFLT_1,   DFLT_2,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  QWERTY,   DEBUG,
        RGB_TOG,  BL_TOGG,  BL_ON,    BL_OFF,   BL_BRTG,  BL_STEP,  RGB_M_P,  RGB_M_B,  RGB_M_R,  TERM_ON,  TERM_OFF, KC_TRNS,
        RGB_MOD,  RGB_HUI,  RGB_SAI,  RGB_VAI,  BL_INC,   RGB_SPI,  RGB_M_SW, RGB_M_SN, RGB_M_K,  AU_ON,    AU_OFF,   KC_TRNS,
        RGB_RMOD, RGB_HUD,  RGB_SAD,  RGB_VAD,  BL_DEC,   RGB_SPD,  RGB_M_X,  RGB_M_G,  RGB_M_T,  MU_ON,    MU_OFF,   MU_MOD,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,       KC_TRNS,       KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

/* Combos
 * ,-----------------------------------------------------------------------------------.
 * | TASK |  NA  |  NA  |  NA  |  NA  |  NA  |  NA  |  NA  |  NA  |  NA  |  NA  |  NA  |
 * |  Man |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  NA  |  NA  |  NA  |  NA  |  NA  |  NA  |  NA  |  NA  |  NA  |  NA  |  NA  |  NA  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |  NA  |  NA  |  NA  |  NA  |  NA  |  NA  |  NA  |  NA  |  NA  |  NA  |  NA  |  NA  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |  NA  |  NA  |  NA  |  NA  |  NA  |  NA  |  NA  |Teams |  NA  |  NA  |  NA  |  NA  |
 * |      |      |      |      |      |      |      | Mute |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | TRNS |  NA  |  NA  |  NA  |  NA  |     TRNS    |  NA  | LEFT | SHFT | SHFT |RIGHT |
 * |      |      |      |      |      |             |      |DSKTP |ALT UP|ALT DN|DSKTP |
 * `-----------------------------------------------------------------------------------'
 */
	[_COMBOS] = LAYOUT_preonic_1x2uC(
        TASKMAN,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    TMS_MUTE, KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_TRNS,  KC_NO,    KC_NO,    KC_NO,    KC_NO,         KC_NO,         KC_NO,    L_DSKTP,  SFTALT_UP, SFTALT_DN, R_DSKTP)
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
        case QWERTY:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_QWERTY);
          }
          return false;
          break;
        case DFLT_1:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_DFLT_1);
          }
          return false;
          break;
        case DFLT_2:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_DFLT_2);
          }
          return false;
          break;
        case LOWER:
          if (record->event.pressed) {
            layer_on(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
            update_tri_layer(_LOWER, _COMBOS, _COMBOS);
          } else {
            layer_off(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
            update_tri_layer(_LOWER, _COMBOS, _COMBOS);
          }
          return false;
          break;
        case RAISE:
          if (record->event.pressed) {
            layer_on(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
            update_tri_layer(_COMBOS, _RAISE, _COMBOS);
           } else {
            layer_off(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
            update_tri_layer(_COMBOS, _RAISE, _COMBOS);
           }
          return false;
          break;
        case ADJUST:
          if (record->event.pressed) {
              layer_on(_ADJUST);
          } else {
              layer_off(_ADJUST);
          }
          return false;
          break;
        case COMBOS:
          if (record->event.pressed) {
              layer_on(_COMBOS);
          } else {
              layer_off(_COMBOS);
          }
          return false;
          break;
      }
    return true;
};

bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

void encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 1) {
    if (IS_LAYER_ON(_QWERTY)) {
      if (clockwise) {
        tap_code(KC_VOLU);
      } else {
        tap_code(KC_VOLD);
      }
    } else if(IS_LAYER_ON(_LOWER)){
      if (clockwise) {
        tap_code(KC_PGUP);
      } else {
        tap_code(KC_PGDN);
      }
    } else if(IS_LAYER_ON(_RAISE)){
      if (clockwise) {
        // Using the 16-bit version of this method to allow for the use
        // of CTRL / SHFT / ALT macros
        tap_code16(LCTL(LGUI(KC_RIGHT)));
      } else {
        // Using the 16-bit version of this method to allow for the use
        // of CTRL / SHFT / ALT macros
        tap_code16(LCTL(LGUI(KC_LEFT)));
      }
    }
  }
}

void dip_switch_update_user(uint8_t index, bool active) {
    switch (index) {
        case 0:
            if (active) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            break;
        case 1:
            if (active) {
                muse_mode = true;
            } else {
                muse_mode = false;
            }
    }
}


void matrix_scan_user(void) {
#ifdef AUDIO_ENABLE
    if (muse_mode) {
        if (muse_counter == 0) {
            uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
            if (muse_note != last_muse_note) {
                stop_note(compute_freq_for_midi_note(last_muse_note));
                play_note(compute_freq_for_midi_note(muse_note), 0xF);
                last_muse_note = muse_note;
            }
        }
        muse_counter = (muse_counter + 1) % muse_tempo;
    } else {
        if (muse_counter) {
            stop_all_notes();
            muse_counter = 0;
        }
    }
#endif
}

bool music_mask_user(uint16_t keycode) {
  switch (keycode) {
    case RAISE:
    case LOWER:
      return false;
    default:
      return true;
  }
}


