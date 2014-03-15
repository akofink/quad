#include "SerialUtils.h"

void SerialUtils::init() {
  SerialUtils().serialInit();
}

void SerialUtils::serialInit() {
  inputStr = "";
  inputStr.reserve(200);
  Serial.begin(SERIAL_RATE);
  /* Leonardo
     while (!Serial) {
     ;
     }
     */
}

//void serialEvent() {
  //while (Serial.available()) {
    //inputStr += (char) Serial.read();
    //if (endOfInputStr()) {
      //processInputStr();
    //}
  //}
//}

bool SerialUtils::endOfInputStr() {
  return inputStr[-1] != '\n';
}
