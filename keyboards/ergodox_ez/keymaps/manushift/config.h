/* * Intro */
/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/



/* * combos */

#define COMBO_COUNT 3      // take care to keep up to date
#define COMBO_MUST_TAP_PER_COMBO   // Controls if a given combo should fire only if tapped within COMBO_HOLD_TERM. (default: false)


/* * oneshot mods */

#define ONESHOT_TAP_TOGGLE 3

#undef ONESHOT_TIMEOUT
#define ONESHOT_TIMEOUT 3000


/* * tap-hold configurations */

#undef TAPPING_TERM
#define TAPPING_TERM 160 // default tapping term  war zuletzt 115, aber mit neuen Mod-Taps auf HomeRow doch zu hart...

#define TAPPING_TERM_PER_KEY




#undef TAPPING_FORCE_HOLD
// not sure if this is necessary but think it had been set at some other level. I don't want it anymore because it kills my arrow keys (mod tap dual role keys)

#define TAPPING_FORCE_HOLD_PER_KEY // i use this with Space/L1 Layer Toggle (yes only one space at a time... but otherwise i cant type numbers or move about immediately after typing a space, which is annoying




#define PERMISSIVE_HOLD // "Mod Down, Char Down, Char Up, Mod Up" still gives Mod+Char even when fully completed within TappingTerm

#define IGNORE_MOD_TAP_INTERRUPT // this is very new and entered with the new alpha mod keys, so test this

#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY // always select hold instead of tap when another key is pressed simultaneously. I use this only for Enter/Shift to prevent sending Enter by accident.


/* * mouse settings */
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 25

#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY 10

#undef MOUSEKEY_WHEEL_MAX_SPEED
#define MOUSEKEY_WHEEL_MAX_SPEED 1

#undef MOUSEKEY_WHEEL_INTERVAL
#define MOUSEKEY_WHEEL_INTERVAL 100 // default is 100, max ist 500

#undef MOUSEKEY_WHEEL_TIME_TO_MAX
#define MOUSEKEY_WHEEL_TIME_TO_MAX 80


#undef MOUSEKEY_MOVE_DELTA   
#define MOUSEKEY_MOVE_DELTA 5  // default 5, is speed/steps???

/* * unicode */

#define UNICODE_SELECTED_MODES UC_WINC // set Unicode Input Method 
#define UNICODE_KEY_WINC KC_F24


/* * what is this? */

#undef NO_PRINT
#define NO_PRINT



#define ORYX_CONFIGURATOR

 
/* * Glow Matrix Stuff */


//#define RGB_MATRIX_STARTUP_SPD 60 // was here, don't know why

/* ** Disable Specific Animations */

/* I couldn't figure out how to disable animations and enable just single ones */
/* so I just disable them all one after the other, saves me about 3.380 bytes of space */
#define DISABLE_RGB_MATRIX_ALPHAS_MODS
#define DISABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define DISABLE_RGB_MATRIX_BREATHING
#define DISABLE_RGB_MATRIX_BAND_SAT
#define DISABLE_RGB_MATRIX_BAND_VAL
#define DISABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#define DISABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#define DISABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#define DISABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#define DISABLE_RGB_MATRIX_CYCLE_ALL
#define DISABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define DISABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define DISABLE_RGB_MATRIX_CYCLE_OUT_IN
#define DISABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#define DISABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define DISABLE_RGB_MATRIX_DUAL_BEACON
#define DISABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define DISABLE_RGB_MATRIX_CYCLE_SPIRAL
#define DISABLE_RGB_MATRIX_RAINBOW_BEACON
#define DISABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#define DISABLE_RGB_MATRIX_RAINDROPS
#define DISABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#define DISABLE_RGB_MATRIX_TYPING_HEATMAP
#define DISABLE_RGB_MATRIX_DIGITAL_RAIN
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#define DISABLE_RGB_MATRIX_SPLASH
#define DISABLE_RGB_MATRIX_MULTISPLASH
#define DISABLE_RGB_MATRIX_SOLID_SPLASH
#define DISABLE_RGB_MATRIX_SOLID_MULTISPLASH





