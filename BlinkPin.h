#include <Arduino.h>

class BlinkPin {
  public:
    BlinkPin(int pin);
    void blink();

  private:
    int _pin;
    long _millisCache;
};
