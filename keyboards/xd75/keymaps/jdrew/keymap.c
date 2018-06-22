#include QMK_KEYBOARD_H

// Helpful defines
#define _______ KC_TRNS

#define M_CTL_TAB LSFT(LCTL(KC_TAB)) 
#define M_ALT_TAB LSFT(LALT(KC_TAB))

/* void led_set_keymap(uint8_t usb_led) {
  if (!(usb_led & (1<<USB_LED_NUM_LOCK))) {
    register_code(KC_NUMLOCK);
    unregister_code(KC_NUMLOCK);
  }
} */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_5x15(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_PSLS, TG(3), KC_PAST, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL,
							            KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_P7, KC_P8, KC_P9, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSLS, 
						             	KC_ESC, KC_A, KC_R, KC_S, KC_T, KC_D, KC_P4, KC_P5, KC_P6, KC_H, KC_N, KC_E, KC_I, KC_O, KC_QUOT, 
						            	KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_P1, KC_P2, KC_P3, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO, 
						            	KC_LCTL, KC_LGUI, KC_LALT, KC_NO, KC_LSFT, MO(2), KC_BSPC, KC_P0, KC_ENT, MO(1), KC_SPC, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
							
	[1] = LAYOUT_ortho_5x15(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
                          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F7, KC_F8, KC_F9, KC_NO, KC_PGDN, KC_UP, KC_PGUP, KC_NO, KC_NO, 
                          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F4, KC_F5, KC_F6, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END, KC_NO, 
                          KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F1, KC_F2, KC_F3, KC_NO, KC_MENU, KC_NO, KC_NO, KC_NO, KC_NO, 
                          KC_LCTL, KC_LGUI, KC_LALT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO),

	[2] = LAYOUT_ortho_5x15(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
                          KC_NO, KC_MUTE, KC_MPRV, KC_MPLY, KC_MNXT, KC_NO, KC_NO, DEBUG, KC_NO, KC_NO, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_NO, 
                          KC_NO, M_ALT_TAB, LALT(KC_TAB), M_CTL_TAB, LCTL(KC_TAB), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
                          KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
                          KC_LCTL, KC_LGUI, KC_LALT, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),

	[3] = LAYOUT_ortho_5x15(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_PSLS, KC_TRNS, KC_PAST, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL, 
                          KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_P7, KC_P8, KC_P9, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, 
                          KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_P4, KC_P5, KC_P6, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, 
                          KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_P1, KC_P2, KC_P3, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO, 
                          KC_LCTL, KC_LGUI, KC_LALT, KC_NO, KC_LSFT, MO(2), KC_BSPC, KC_P0, KC_ENT, MO(1), KC_SPC, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),

	[4] = LAYOUT_ortho_5x15(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};

/*LEADER_EXTERNS();

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leading = false;
    leader_end();

    SEQ_ONE_KEY(KC_F) {
      // Anything you can do in a macro.
      SEND_STRING("QMK is awesome.");
    }
    SEQ_TWO_KEYS(KC_D, KC_D) {
      SEND_STRING(SS_LCTRL("a")SS_LCTRL("c"));
    }
    SEQ_THREE_KEYS(KC_D, KC_D, KC_S) {
      SEND_STRING("https://start.duckduckgo.com"SS_TAP(X_ENTER));
    }
    SEQ_TWO_KEYS(KC_A, KC_S) {
      register_code(KC_LGUI);
      register_code(KC_S);
      unregister_code(KC_S);
      unregister_code(KC_LGUI);
    }
  }
}*/
