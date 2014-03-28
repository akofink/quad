#include "BlinkPin.h"
#include "SerialUtils.h"
#include "ControlSticks.h"
#include "Motors.h"
#include <Servo.h>

#define HEART_BEAT_LED 13
#define SERIAL_RATE 115200

BlinkPin heartbeat(HEART_BEAT_LED);
SerialUtils serial;
ControlSticks controlSticks;
Motors motors;

void setup() {
  Serial.begin(SERIAL_RATE);
  controlSticks.bias();
  motors.setMax(controlSticks.throttle.max);
  motors.setMin(controlSticks.throttle.min);
}

void loop() {
  controlSticks.updateValues();

  motors.fore.setSpeed(controlSticks.throttle.pulseValue);

  controlSticks.printValues();

  heartbeat.blink();
}
