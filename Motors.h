#include <Arduino.h>
#include "Motor.h"

#define FORE 3
#define AFT 5
#define PORT 6
#define STARBOARD 9

class Motors {
  public:
    Motor fore;
    Motor aft;
    Motor port;
    Motor starboard;

    Motors();
    void setMin(long value);
    void setMax(long value);
};
