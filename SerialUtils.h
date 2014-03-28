#include "Arduino.h"

extern void processInputStr();

void serialEvent();

class SerialUtils
{
  public:
    String getInputStr();
    void processSerialEvent();
    void init();

  private:
    int _rate;
    char _lastChar;
    String _inputStr;
    bool endOfInputStr();
};

extern SerialUtils serial;
