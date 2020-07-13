// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

#include "manna-harbour_miryoku.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
#if defined MIRYOKU_BASE_QWERTY
  [BASE] = LAYOUT_miryoku(
    KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,
    KC_A,              KC_S,              KC_D,              KC_F,              KC_G,              KC_H,              KC_J,              KC_K,              KC_L,              KC_SCLN,
    LSFT_T(KC_Z),      LGUI_T(KC_X),      LCTL_T(KC_C),      LALT_T(KC_V),      ALGR_T(KC_B),      ALGR_T(KC_N),      LALT_T(KC_M),      LCTL_T(KC_COMM),   LGUI_T(KC_DOT),    LSFT_T(KC_SLSH),
    KC_NP,             KC_NP,             LT(MOUR, KC_TAB),  LT(NAVR, KC_SPC),   KC_SPC,            LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  KC_NP,             KC_NP
  ),
#elif defined MIRYOKU_BASE_DVORAK
  [BASE] = LAYOUT_miryoku(
    KC_QUOT,           KC_COMM,           KC_DOT,            KC_P,              KC_Y,              KC_F,              KC_G,              KC_C,              KC_R,              KC_L,
    LGUI_T(KC_A),      LALT_T(KC_O),      LCTL_T(KC_E),      LSFT_T(KC_U),      KC_I,              KC_D,              LSFT_T(KC_H),      LCTL_T(KC_T),      LALT_T(KC_N),      LGUI_T(KC_S),
    KC_SLSH,           ALGR_T(KC_Q),      KC_J,              KC_K,              KC_X,              KC_B,              KC_M,              KC_W,              ALGR_T(KC_V),      KC_Z,
    KC_NP,             KC_NP,             LT(MEDR, KC_TAB),  LT(NAVR, KC_SPC),  LT(MOUR, KC_SPC),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  KC_NP,             KC_NP
  ),
#elif defined MIRYOKU_BASE_COLEMAK
  [BASE] = LAYOUT_miryoku(
    KC_Q,              KC_W,              KC_F,              KC_P,              KC_G,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,
    LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_D,              KC_H,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),
    KC_Z,              ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_K,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
    KC_NP,             KC_NP,             LT(MEDR, KC_TAB),  LT(NAVR, KC_SPC),  LT(MOUR, KC_SPC),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  KC_NP,             KC_NP
  ),
#elif defined MIRYOKU_BASE_COLEMAKDH
  [BASE] = LAYOUT_miryoku(
    KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,
    LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_K,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),
    KC_Z,              ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_M,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
    KC_NP,             KC_NP,             LT(MEDR, KC_TAB),  LT(NAVR, KC_SPC),  LT(MOUR, KC_SPC),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  KC_NP,             KC_NP
  ),
#elif defined MIRYOKU_BASE_WORKMAN
  [BASE] = LAYOUT_miryoku(
    KC_Q,              KC_D,              KC_R,              KC_W,              KC_B,              KC_J,              KC_F,              KC_U,              KC_P,              KC_QUOT,
    LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_H),      LSFT_T(KC_T),      KC_G,              KC_Y,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_O),      LGUI_T(KC_I),
    KC_Z,              ALGR_T(KC_X),      KC_M,              KC_C,              KC_V,              KC_K,              KC_L,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
    KC_NP,             KC_NP,             LT(MEDR, KC_TAB),  LT(NAVR, KC_SPC),  LT(MOUR, KC_SPC),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  KC_NP,             KC_NP
  ),
#else
  [BASE] = LAYOUT_miryoku(
    KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,
    LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),
    KC_Z,              ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
    KC_NP,             KC_NP,             LT(MEDR, KC_TAB),  LT(NAVR, KC_SPC),  LT(MOUR, KC_SPC),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  KC_NP,             KC_NP
  ),
#endif
  [NAVR] = LAYOUT_miryoku(
    KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_ESC,  KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLU,
    KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_VOLD,
    KC_LSFT, KC_LGUI, KC_CAPS, KC_LALT, KC_ALGR, KC_NP,   KC_NP,   KC_NP,   KC_NP,   KC_MUTE,
    KC_NP,   KC_NP,   KC_NA,   KC_NA,   KC_NA,   KC_ENT,  KC_BSLS, KC_DEL,  KC_NP,   KC_NP
  ),
  [MOUR] = LAYOUT_miryoku(
    KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,   LGUI(KC_A), LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), LGUI(KC_V),
    KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NU,
    KC_LSFT, KC_LGUI, KC_CAPS, KC_LALT, KC_ALGR, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NU,
    KC_NP,   KC_NP,   KC_NA,   KC_NA,   KC_NA,   KC_BTN3, KC_BTN1, KC_BTN2, KC_NP,   KC_NP
  ),
  [MEDR] = LAYOUT_miryoku(
    KC_RST,  KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_TOG,  KC_MOD,  KC_HUI,  KC_SAI,  KC_VAI,
    KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NU,
    KC_LSFT, KC_LGUI, KC_CAPS, KC_LALT, KC_ALGR, KC_NU,   KC_NU,   KC_NU,   KC_NU,   KC_NU,
    KC_NP,   KC_NP,   KC_NA,   KC_NA,   KC_NA,   KC_MSTP, KC_MPLY, KC_MUTE, KC_NP,   KC_NP
  ),
  [MBO] = LAYOUT_miryoku(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_NP,   KC_NP,   KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN3, KC_BTN2, KC_NP,   KC_NP
  ),
  [FUNL] = LAYOUT_miryoku(
    KC_PSCR,  KC_F1,   KC_F2,   KC_F3,   KC_F12, KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,
    KC_SLCK,  KC_F4,   KC_F5,   KC_F6,   KC_F11, KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,
    KC_PAUS,  KC_F7,   KC_F8,   KC_F9,   KC_F10, KC_ALGR, KC_LALT, KC_CAPS, KC_LGUI, KC_LSFT,
    KC_NP,    KC_NP,   KC_LCTL, KC_SPC,  KC_SPC, KC_NA,   KC_NA,   KC_NA,   KC_NP,   KC_NP
  ),
  [NSL] = LAYOUT_miryoku(
    KC_BSPC, KC_1,    KC_2,    KC_3,    KC_EQL,  KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,
    KC_QUOT, KC_4,    KC_5,    KC_6,    KC_MINS, KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,
    KC_GRV,  KC_7,    KC_8,    KC_9,    KC_0,    KC_ALGR, KC_LALT, KC_CAPS, KC_LGUI, KC_LSFT,
    KC_NP,   KC_NP,   KC_LBRC, KC_RBRC, KC_SPC,  KC_NA,   KC_NA,   KC_NA,   KC_NP,   KC_NP
  ),
  [NSSL] = LAYOUT_miryoku(
    KC_PIPE, KC_EXLM, KC_AT,   KC_HASH, KC_PLUS, KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,
    KC_DQUO, KC_DLR,  KC_PERC, KC_CIRC, KC_UNDS, KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,
    KC_TILD, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_ALGR, KC_LALT, KC_CAPS, KC_LGUI, KC_LSFT,
    KC_NP,   KC_NP,   KC_LCBR, KC_RCBR, KC_SPC,  KC_NA,   KC_NA,   KC_NA,   KC_NP,   KC_NP
  )
};
