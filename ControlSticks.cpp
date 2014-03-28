#include "ControlSticks.h"

ControlSticks::ControlSticks() :
  throttle(THROTTLE, "T"),
  yaw(YAW, "Y"),
  pitch(PITCH, "P"),
  roll(ROLL, "R") { }

void ControlSticks::printValues() {
  if (Serial) {
    throttle.printValue();
    Serial.print("\t");
    yaw.printValue();
    Serial.print("\t");
    pitch.printValue();
    Serial.print("\t");
    roll.printValue();
    Serial.println();
  }
}

void ControlSticks::updateValues() {
  throttle.updateValue();
  yaw.updateValue();
  pitch.updateValue();
  roll.updateValue();
}

void ControlSticks::bias() {
  Serial.println("Move the sticks on the transmitter to the min and max values.");
  while(millis() < 5000) {
    updateValues();
  }
  Serial.println("Bias complete.");
}
