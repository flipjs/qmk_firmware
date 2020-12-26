// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

#include "manna-harbour_miryoku.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[BASE] = LAYOUT_miryoku(
KC_Q,               KC_W,               KC_E,               KC_R,               KC_T,             KC_Y,             KC_U,                  KC_I,                  KC_O,                 KC_P,
KC_A,               KC_S,               KC_D,               KC_F,               KC_G,             KC_H,             KC_J,                  KC_K,                  KC_L,                 LT(FUNL,KC_SCLN),
MT(MOD_LSFT,KC_Z),  MT(MOD_LALT,KC_X),  MT(MOD_LCTL,KC_C),  MT(MOD_LGUI,KC_V),  MEH_T(KC_B),      MEH_T(KC_N),      MT(MOD_LGUI,KC_M),     MT(MOD_LCTL,KC_COMM),  MT(MOD_LALT,KC_DOT),  MT(MOD_RSFT,KC_SLSH),
KC_NP,              KC_NP,              MO(NSSL),           MO(NSL),            LT(NAVR,KC_SPC),  LT(NAVR,KC_ENT),  MT(MOD_LCTL,KC_BSPC),  KC_LGUI,               KC_NP,                KC_NP
),
[NAVR] = LAYOUT_miryoku(
KC_ESC,      KC_NA,       KC_UP,          KC_NA,         KC_NA,   KC_VOLD,       KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_VOLU,
LGUI(KC_A),  KC_LEFT,     KC_DOWN,        KC_RIGHT,      KC_NA,   KC_LEFT,       KC_DOWN,  KC_UP,    KC_RGHT,  KC_MUTE,
LGUI(KC_Z),  LGUI(KC_X),  LGUI(KC_C),     LGUI(KC_V),    KC_NA,   KC_MEH,        KC_LGUI,  KC_LCTL,  KC_LALT,  KC_LSFT,
KC_NP,       KC_NP,       LSFT(KC_COMM),  LSFT(KC_DOT),  KC_SPC,  LGUI(KC_SPC),  KC_NA,    KC_NA,    KC_NP,    KC_NP
),
[NSSL] = LAYOUT_miryoku(
KC_ESC,      KC_NA,    KC_NA,    KC_NA,    LCTL(KC_P),  KC_PLUS,  KC_EXLM,  KC_AT,    KC_HASH,  KC_PIPE,
LCTL(KC_A),  KC_NA,    KC_NA,    KC_NA,    KC_TAB,      KC_UNDS,  KC_DLR,   KC_PERC,  KC_CIRC,  KC_DQUO,
KC_LSFT,     KC_LALT,  KC_LCTL,  KC_LGUI,  LCTL(KC_N),  KC_TILD,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,
KC_NP,       KC_NP,    KC_NA,    KC_NA,    KC_SPC,      KC_ENT,   KC_BSPC,  KC_DEL,   KC_NP,    KC_NP
),
[NSL] = LAYOUT_miryoku(
KC_ESC,      KC_LBRC,  KC_LPRN,  KC_RPRN,  LCTL(KC_P),  KC_EQL,   KC_1,     KC_2,    KC_3,   KC_BSLS,
LCTL(KC_A),  KC_RBRC,  KC_LCBR,  KC_RCBR,  KC_TAB,      KC_MINS,  KC_4,     KC_5,    KC_6,   KC_QUOT,
KC_LSFT,     KC_LALT,  KC_LCTL,  KC_LGUI,  LCTL(KC_N),  KC_GRV,   KC_7,     KC_8,    KC_9,   KC_0,
KC_NP,       KC_NP,    KC_NA,    KC_NA,    KC_SPC,      KC_ENT,   KC_BSPC,  KC_DEL,  KC_NP,  KC_NP
),
[FUNL] = LAYOUT_miryoku(
KC_PSCR,  KC_F1,  KC_F2,   KC_F3,    KC_F10,  KC_NA,  KC_NA,  KC_NA,  KC_NA,  RESET,
KC_SLCK,  KC_F4,  KC_F5,   KC_F6,    KC_F11,  KC_NA,  KC_NA,  KC_NA,  KC_NA,  KC_NA,
KC_PAUS,  KC_F7,  KC_F8,   KC_F9,    KC_F12,  KC_NA,  KC_NA,  KC_NA,  KC_NA,  KC_NA,
KC_NP,    KC_NP,  KC_INS,  KC_CAPS,  KC_NA,   KC_NA,  KC_NA,  KC_NA,  KC_NP,  KC_NP
)
};

