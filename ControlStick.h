#include <Arduino.h>

class ControlStick {
  public:
    ControlStick(long pin, String label);
    double percentageValue();
    void printValue();
    void updateValue();
    unsigned long pulseValue;
    unsigned long max;
    unsigned long min;

  private:
    String _label;
    long _pin;
    void updateMax(unsigned long value);
    void updateMin(unsigned long value);
};
