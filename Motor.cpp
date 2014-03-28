#include "Motor.h"

void Motor::attach(int pin) {
  servo.attach(pin, min, max);
}

void Motor::setSpeed(long pulseDuration) {
  if (Serial) {
    Serial.print("min: ");
    Serial.print(min, DEC);
    Serial.print("\tmax: ");
    Serial.print(max, DEC);
    Serial.print("\tpulse: ");
    Serial.println(pulseDuration, DEC);
  }

  servo.write(SERVO_RANGE * (pulseDuration - min) / (max - min));
}

void Motor::setMin(long value) {
  min = value;
}

void Motor::setMax(long value) {
  max = value;
}
