/*
Copyright 2024 mintyleaf

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H

/* Extended keycodes for controlling Bluetooth */
enum BT_keycodes {
    KC_BTPROF0 = SAFE_RANGE,  // Set bluetooth profile 0
    KC_BTPROF1,               // Set bluetooth profile 1
    KC_BTPROF2,               // Set bluetooth profile 2
    KC_BTPAIR,                // Start pairing mode
    KC_BTTOGL,                // Toggle bluetooth mode
    KC_BTRST,                 // Reset bluetooth module
    KC_BTBATT,                // Show battery level
    K2_SAFE_RANGE
};

#define KC_BTP0     KC_BTPROF0
#define KC_BTP1     KC_BTPROF1
#define KC_BTP2     KC_BTPROF2
#define KC_BTPR     KC_BTPAIR
#define KC_BTTG     KC_BTTOGL
#define KC_BTRT     KC_BTRST
#define KC_BTBT     KC_BTBATT

enum layer_names {
    LAYER0 = 0,
    LAYER1 = 1,
    LAYER2 = 2,
    LAYER3 = 3,
};

#define KC_FN1 LT(_FN1, KC_APP)
#define KC_FN2 LT(_FN2, KC_SCRL)
#define KC_TASK LGUI(KC_TAB)        // Task viewer
#define KC_FLXP LGUI(KC_E)          // Windows file explorer

#define KC_TASK LGUI(KC_TAB)        // Task viewer
#define KC_FLXP LGUI(KC_E)          // Windows file explorer
#define KC_CRTN LGUI(KC_C)          // Cortana | Microsoft Teams

#define KC_MSSN LGUI(KC_F3)         // Mission Control
#define KC_FIND LALT(LGUI(KC_SPC))  // Finder
#define KC_SIRI LGUI(KC_SPC)        // Siri
#define KC_MSNP LSFT(LGUI(KC_4))    // Mac snip tool

#define LY1_T_TAB LT(LAYER1,KC_TAB)
#define HYPR_E ALL_T(KC_ESC)
