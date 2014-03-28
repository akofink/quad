#include "BlinkPin.h"

BlinkPin::BlinkPin(int pin) {
  _pin = pin;
  _millisCache = millis();
  pinMode(pin, OUTPUT);
}

void BlinkPin::blink() {
  if (millis() - _millisCache >= 1000) { // cond
    digitalWrite(_pin, !digitalRead(_pin));
    _millisCache = millis(); // i++
  }
}

