#QMK
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_4x4(
        KC_7,    KC_8,    KC_9,    KC_PSLS,
        KC_4,    KC_5,    KC_6,    KC_PAST,
        KC_1,    KC_2,    KC_3,    KC_PMNS,
        KC_0,    KC_DOT,  KC_ENT,  KC_PPLS
    ) 