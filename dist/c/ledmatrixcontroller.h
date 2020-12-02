// Autogenerated C header file for LED Matrix Controller
#ifndef _JACDAC_SPEC_LEDMATRIX_CONTROLLER_H
#define _JACDAC_SPEC_LEDMATRIX_CONTROLLER_H 1

#define JD_SERVICE_CLASS_LEDMATRIX_CONTROLLER  0x1d35e393

/**
 * Read-write bytes. Read or writes the state of the screen where pixel on/off state is 
 * stored as a bit, column by column. The column should be byte aligned.
 */
#define JD_LEDMATRIX_CONTROLLER_REG_LEDS 0x80

/**
 * Read-write bool (uint8_t). Disables or enables the whole screen.
 */
#define JD_LEDMATRIX_CONTROLLER_REG_ENABLED 0x81

/**
 * Read-write uint8_t. Sets the general brightness of the LEDs.
 */
#define JD_LEDMATRIX_CONTROLLER_REG_BRIGHTNESS 0x82

/**
 * Constant # uint16_t. Number of rows on the screen
 */
#define JD_LEDMATRIX_CONTROLLER_REG_ROWS 0x83

/**
 * Constant # uint16_t. Number of columns on the screen
 */
#define JD_LEDMATRIX_CONTROLLER_REG_COLUMNS 0x84

/**
 * No args. Shorthand command to clear all the LEDs on the screen.
 */
#define JD_LEDMATRIX_CONTROLLER_CMD_CLEAR 0x80

#endif
