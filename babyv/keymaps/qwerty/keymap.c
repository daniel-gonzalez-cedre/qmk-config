/* Copyright 2020 Eye Oh! Designs
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

// Defines names for use in layer keycodes and the keymap
enum layer_names {
   
    BASE,
    LOWER,
    RAISE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [BASE] = LAYOUT_1u(
        KC_TAB,     KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,           KC_Y,   KC_U,   KC_I,       KC_O,   KC_P,       KC_BSPC,
        KC_LCTRL,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,           KC_H,   KC_J,   KC_K,       KC_L,   KC_SCLN,    KC_QUOT,
        KC_LSFT,    KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,           KC_N,   KC_M,   KC_COMM,    KC_DOT, KC_SLSH,    KC_RSFT,
        KC_CAPS,            KC_LALT,    MO(RAISE),  KC_LGUI,        KC_SPC, MO(LOWER),  KC_TILDE,                   KC_ENT
    ),
    [LOWER] = LAYOUT_1u(
        KC_ESC,     KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,     KC_PERC,            KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_EQL,     KC_BSLS,    KC_DEL,
        KC_LCTRL,   KC_LCBR,    KC_RCBR,    KC_LPRN,    KC_RPRN,    KC_NO,              KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   KC_COLON,   KC_GRAVE,
        KC_LSFT,    KC_NO,      KC_NO,      KC_LBRC,    KC_RBRC,    KC_NO,              KC_PLUS,    KC_MINUS,   KC_UNDS,    KC_NO,      KC_NO,      KC_RSFT,
        KC_CAPS,                KC_TRNS,    KC_TRNS,    KC_TRNS,                        KC_SPC, KC_TRNS,   KC_TRNS,                                 KC_ENT
    ),
    [RAISE] = LAYOUT_1u(
        KC_VOLU,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,            KC_NO,  KC_7,   KC_8,   KC_9,   KC_NO,  KC_NO,
        KC_VOLD,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,            KC_NO,  KC_4,   KC_5,   KC_6,   KC_NO,  KC_NO,
        KC_MUTE,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,            KC_NO,  KC_1,   KC_2,   KC_3,   KC_NO,  KC_NO,
        RESET,          KC_TRNS,    KC_TRNS,    KC_TRNS,            KC_SPC, KC_0,   KC_DOT,                 KC_ENT
    ),
};
