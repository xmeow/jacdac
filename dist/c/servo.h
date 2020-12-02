// Autogenerated C header file for Servo
#ifndef _JACDAC_SPEC_SERVO_H
#define _JACDAC_SPEC_SERVO_H 1

#define JD_SERVICE_CLASS_SERVO  0x12fc9103

/**
 * Read-write μs uint32_t. Specifies length of the pulse in microseconds. The period is always 20ms.
 */
#define JD_SERVO_REG_PULSE JD_REG_VALUE

/**
 * Read-write bool (uint8_t). Turn the power to the servo on/off.
 */
#define JD_SERVO_REG_ENABLED JD_REG_INTENSITY

#endif
