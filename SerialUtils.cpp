#include "SerialUtils.h"

void serialEvent() {
  serial.processSerialEvent();
}

void processInputStr() {
  Serial.print(serial.getInputStr());
}

String SerialUtils::getInputStr() {
  return _inputStr;
}

void SerialUtils::init() {
  _inputStr = "";
  _inputStr.reserve(200);
}

void SerialUtils::processSerialEvent() {
  if (Serial) {
    while (Serial.available()) {
      _lastChar = (char) Serial.read();
      _inputStr += _lastChar;
      if (endOfInputStr()) {
        processInputStr();
        _inputStr = "";
      }
    }
  }
}

bool SerialUtils::endOfInputStr() {
  return _lastChar == '\n';
}
