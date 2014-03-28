#include <Arduino.h>
#include <Servo.h>

#define SERVO_RANGE 180

class Motor {
  public:
    Servo servo;
    long min;
    long max;

    void setMin(long value);
    void setMax(long value);
    void setSpeed(long pulseDuration);
    void attach(int pin);
};
