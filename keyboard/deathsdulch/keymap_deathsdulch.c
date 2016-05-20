#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* 0: Default layer 
   * ,---------------------------------------------------------------.
   * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|   Bspc| VU|
   * |---------------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \| VD|
   * |---------------------------------------------------------------|
   * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |Mut|
   * |---------------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Up |Ply|
   * |---------------------------------------------------------------|
   * |Win |Fn  |Alt |       Space            |Ctrl|Fn  | |Lef|Dwn|Rig|
   * `---------------------------------------------------------------'
   */
  KEYMAP(
    ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,VOLU, \
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,VOLD, \
    LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT, MUTE, \
    LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,  UP,MPLY, \
    LGUI,FN0, LALT,          SPC,                RCTL,FN1,      LEFT,DOWN,RGHT),
  /* 1: Function layer
   * ,---------------------------------------------------------------.
   * |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|    Del|Ins|
   * |---------------------------------------------------------------|
   * |Caps |   |   |   |   |   |   |   |   |   |Prn|   |   |     |   |
   * |---------------------------------------------------------------|
   * |      |   |   |   |   |   |   |   |   |   |   |   |        |   |
   * |---------------------------------------------------------------|
   * |        |   |   |   |   |   |   |   |   |   |   |      |PgU|Pau|
   * |---------------------------------------------------------------|
   * |    |    |    |                        |    |    | |Hom|PgD|End|
   * `---------------------------------------------------------------'
   */
  KEYMAP(
    GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL, INS,  \
    CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,TRNS,TRNS,TRNS,TRNS, \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS, \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,PGUP,PAUS, \
    TRNS,TRNS,TRNS,          TRNS,               TRNS,TRNS,     HOME,PGDN,END ),
};

const uint16_t PROGMEM fn_actions[] = {
  ACTION_LAYER_MOMENTARY(1),
  ACTION_LAYER_MOMENTARY(1),
};
