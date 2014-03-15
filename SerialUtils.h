#include "Arduino.h"

#define SERIAL_RATE 115200

class SerialUtils
{
  public:
    void init();

  private:
    String inputStr;
    void serialInit();
    bool endOfInputStr();
    void serialEvent();
};
