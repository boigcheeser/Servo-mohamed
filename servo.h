#ifndef SERVO_H
#define SERVO_H

#include "mbed.h"

class Servo {
public:
    Servo(PinName pin);
    void setAngle(float angle); // Set servo position in degrees (0-180)

private:
    PwmOut _pwm;
    float angleToPulseWidth(float angle); // Convert angle to PWM pulse width
};

#endif // SERVO_H
