// Autogenerated C header file for Motor
#ifndef _JACDAC_SPEC_MOTOR_H
#define _JACDAC_SPEC_MOTOR_H 1

#define JD_SERVICE_CLASS_MOTOR  0x17004cd8

/**
 * Read-write ratio i1.15 (int16_t). PWM duty cycle of the motor. Use negative/positive values to run the motor forwards and backwards.
 * Positive is recommended to be clockwise rotation and negative counterclockwise. A duty of ``0`` 
 * while ``enabled`` acts as brake.
 */
#define JD_MOTOR_REG_DUTY JD_REG_VALUE

/**
 * Read-write bool (uint8_t). Turn the power to the motor on/off.
 */
#define JD_MOTOR_REG_ENABLED JD_REG_INTENSITY

/**
 * Constant kg/cm u16.16 (uint32_t). Torque required to produce the rated power of an electrical motor at load speed.
 */
#define JD_MOTOR_REG_LOAD_TORQUE 0x180

/**
 * Constant rpm u16.16 (uint32_t). Revolutions per minute of the motor under full load.
 */
#define JD_MOTOR_REG_LOAD_SPEED 0x181

/**
 * Constant bool (uint8_t). Indicates if the motor can run backwards.
 */
#define JD_MOTOR_REG_REVERSIBLE 0x182

#endif
