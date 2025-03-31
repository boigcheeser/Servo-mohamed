#include "servo.h"

Servo::Servo(PinName pin) : _pwm(pin) {
    _pwm.period_ms(20); // Servo requires a 20ms period (50Hz)
}

void Servo::setAngle(float angle) {
    float pulseWidth = angleToPulseWidth(angle);
    _pwm.pulsewidth_us(pulseWidth);
}

// Convert angle (0-180) to pulse width (typically 500-2500 µs)
float Servo::angleToPulseWidth(float angle) {
    return 500 + (angle / 180.0f) * 2000; // Maps 0° -> 500us, 180° -> 2500us
}
