#include "ControlStick.h"

ControlStick::ControlStick(long pin, String label) {
  _pin = pin;
  _label = label;
  min = 1e10;
  max = 0;
  pinMode(pin, INPUT);
}

void ControlStick::updateMax(unsigned long value) {
  if (value > max) {
    max = value;
  }
}

void ControlStick::updateMin(unsigned long value) {
  if (value < min) {
    min = value;
  }
}

void ControlStick::updateValue() {
  pulseValue = pulseIn(_pin, HIGH);

  updateMin(pulseValue);
  updateMax(pulseValue);
}

double ControlStick::percentageValue() {
  return (double) (pulseValue - min) / (max - min);
}

void ControlStick::printValue() {
  Serial.print(_label + ": ");
  Serial.print(percentageValue());
}
