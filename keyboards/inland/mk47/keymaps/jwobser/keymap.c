/* Copyright (C) 2023 jonylee@hfd
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

/*
const uint16_t PROGMEM boot_combo[] = {KC_LCTL, KC_LGUI, KC_SLSH, COMBO_END};

combo_t key_combos[] = {
    COMBO(boot_combo, QK_BOOT)
};

*/

enum layer_names {
    _BASE,
    _CODE,
    _NUM,
    _ADJ,
    _NAV
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT_planck_mit(
        QK_GESC, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,      KC_I,     KC_O,    KC_P,    KC_BSPC,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,      KC_K,     KC_L,    KC_SCLN, KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,      KC_COMM,  KC_DOT,  KC_UP,   KC_SLSH,
        KC_LCTL, MO(_NAV),   KC_LALT, KC_LGUI, TT(_NUM),    KC_SPC,       MO(_CODE), MO(_ADJ), KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [_NAV] = LAYOUT_planck_mit(
        _______, _______, _______, _______, _______, _______, _______, KC_PGUP, _______, _______, _______, _______,
        _______, _______, _______, KC_PGDN, _______, KC_0,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_DLR,  _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,     _______,      _______, _______, _______, _______, _______
    ),

    [_CODE] = LAYOUT_planck_mit(
        _______, _______, _______, _______, _______, _______, _______, KC_LCBR,   KC_RCBR, _______, _______, _______,
        _______, KC_PLUS, KC_MINUS,KC_ASTR, KC_SLSH, KC_COLN, KC_EQL,  KC_LPRN,   KC_RPRN, _______, _______, _______,
        _______, KC_HASH, KC_PERC, KC_AMPR, KC_PIPE, _______, _______, KC_LBRC,   KC_RBRC, _______, _______, _______,
        _______, KC_QUES, KC_LT,   KC_GT,   _______,      _______,     _______,   _______, _______, _______, _______
    ),

    [_ADJ] = LAYOUT_planck_mit(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  RM_NEXT,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, RM_SATD, RM_SATU, RM_HUEU,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RM_VALU, RM_TOGG,
        _______, _______, _______, QK_BOOT, _______,      _______,     _______, _______, RM_SPDD, RM_VALD, RM_SPDU
    ),

    [_NUM] = LAYOUT_planck_mit(
        _______, _______, _______, _______, _______, _______, _______, KC_P7,   KC_P8,   KC_P9,    _______, _______,
        KC_CAPS, _______, _______, _______, _______, _______, _______, KC_P4,   KC_P5,   KC_P6,    KC_QUOT, _______,
        OSM(MOD_LSFT), _______, _______, _______, _______, _______, _______, KC_P1,   KC_P2,   KC_P3,    _______, _______,
        _______, XXXXXXX, _______, _______, _______,      _______,     KC_P0,   KC_NUM,  _______,  _______, _______
    )


};
// clang-format on

