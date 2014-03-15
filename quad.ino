#include "SerialUtils.h"

#define LED 13

long millisCache;
SerialUtils serialUtils;

void setup() {
  serialUtils.init();
  millisCache = millis();
  pinMode(LED, OUTPUT);
}

void loop() {
  Serial.println(micros());
  if (millis() - millisCache >= 1000) { // cond
    digitalWrite(LED, !digitalRead(LED));
    millisCache = millis(); // i++
  }
}
void processInputStr() {
  // Nothing for now
  // inputStr is ready to be used
}

