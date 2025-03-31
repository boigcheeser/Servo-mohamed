#include "mbed.h"
#include "servo.h"

Servo myServo(PA_2); // Connect servo signal wire to PA_2

int main() {
    while (1) {
        for (float angle = 0; angle <= 180; angle += 30) {
            myServo.setAngle(angle);
            printf("Servo Angle: %.1f°\n", angle);
            ThisThread::sleep_for(1s);
        }
        for (float angle = 180; angle >= 0; angle -= 30) {
            myServo.setAngle(angle);
            printf("Servo Angle: %.1f°\n", angle);
            ThisThread::sleep_for(1s);
        }
    }
}
