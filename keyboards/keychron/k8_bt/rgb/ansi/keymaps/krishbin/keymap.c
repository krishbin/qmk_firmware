/* Copyright 2020 Adam Honse <calcprogrammer1@gmail.com>
 * Copyright 2020 Dimitris Mantzouranis <d3xter93@gmail.com>
 * Copyright 2022 Harrison Chan (Xelus)
 * Copyright 2022 Thomas Bowman Mørch (tbowmo)
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
#include "keymap.h"
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*	+--------------------------------------------------------------------------+----------------+
    | ESC |  | F1 | F2 | F3 | F4 | | F5 | F6 | F7 | F8 | | F9| F10| F11| F12|  | |PSCR|????|PAUS|
    +--------------------------------------------------------------------------+------|----|----|
    |  ~  |  1 |  2 |  3 |  4 |  5 |  6 |  7 |  8 |  9 |  0 |  - |  = | BACKSP | |INS |SCRL|PGUP|
    +--------------------------------------------------------------------------+------|----|----|
    |  TAB  |  Q |  W |  E |  R |  T |  Y |  U |  I |  O |  P |  [ |  ] |   \  | |DEL |END |PGDN|
    +--------------------------------------------------------------------------+------|----|----|
    | CAPSLCK  |  A |  S |  D |  F |  G |  H |  J |  K |  L | ; | ' |  RETURN  |                |
    +--------------------------------------------------------------------------+      |----|    |
    | LSHIFT     |  Z |  X |  C |  V |  B |  N |  M | , | . |  / |   RSHIFT    |      | UP |    |
    +--------------------------------------------------------------------------+------|----|----|
    |LCTRL| LGUI| LALT |            SPACE            | RALT| RGUI | FN | RCTRL | |LFT |DWN |RGT |
    +--------------------------------------------------------------------------+----------------+
*/
    [LAYER0] = LAYOUT_tkl_ansi(
        KC_ESC,              KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,    KC_F12,      KC_PSCR,  KC_CRTN,  RGB_MOD,
        KC_GRV,     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,    KC_BSPC,     KC_INS,   KC_HOME,  KC_PGUP,
        LY1_T_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,   KC_BSLS,     KC_DEL,   KC_END,   KC_PGDN,
        HYPR_E,     KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,            KC_ENT,
        KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,                          KC_UP,
        KC_LCTL,    KC_LALT, KC_LGUI,                   KC_SPC,                                   MO(LAYER1), KC_RGUI, KC_RALT,   KC_RCTL,     KC_LEFT,  KC_DOWN,  KC_RGHT
    ),

    [LAYER1] = LAYOUT_tkl_ansi(
        QK_BOOT,          KC_BRID, KC_BRIU, KC_TASK, KC_FLXP, RGB_VAD, RGB_VAI, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD,      KC_VOLU,     _______,  KC_WAKE,  RGB_TOG,
        KC_BTPR, KC_BTP0, KC_BTP1, KC_BTP2, KC_BTRT, _______, _______, _______, _______, _______, _______, _______, TG(LAYER3),   _______,     _______,  RGB_SPI,  RGB_HUI,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,     _______,  RGB_SPD,  RGB_HUD,
        _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,               _______,
        _______, _______, _______, _______, _______, KC_BTBT, _______, _______, _______, _______, _______,          KC_CAPS,                             _______,
        _______, _______, GU_ON,                     _______,                                     _______, GU_OFF,  _______,      _______,     RGB_SAD,  _______,  RGB_SAI
    ),
    [LAYER2] = LAYOUT_tkl_ansi(
      KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,    KC_F12,        KC_MSNP, KC_SIRI, RGB_MOD,
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,    KC_BSPC,       KC_INS,  KC_HOME, KC_PGUP,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,   KC_BSLS,       KC_DEL,  KC_END,  KC_PGDN,
      KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,            KC_ENT,
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,                           KC_UP,
      KC_LCTL, KC_LALT, KC_LGUI,                   KC_SPC,                                    MO(LAYER3)  , KC_RALT,KC_RGUI ,KC_RCTL,       KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [LAYER3] = LAYOUT_tkl_ansi(
      TG(LAYER3),       KC_BRID, KC_BRIU, KC_MSSN, KC_FIND, RGB_VAD, RGB_VAI, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU,         KC_P7,   KC_P8,   KC_P9,
      KC_BTPR, KC_BTP0, KC_BTP1, KC_BTP2, KC_BTRT, _______, _______, _______, _______, _______, _______, KC_PMNS, KC_PPLS, KC_BSPC,         KC_P4,   KC_P5,   KC_P6,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PSLS, KC_PAST, KC_P0,           KC_P1,   KC_P2,   KC_P3,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,                           KC_UP,
      _______, _______, _______,                   _______,                                     _______, _______, _______, KC_NUM,          KC_LEFT, KC_DOWN, KC_RGHT
    )
};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  //debug_enable=true;
  //debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}
