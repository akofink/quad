#include "ControlStick.h"

#define THROTTLE 2
#define YAW 4
#define PITCH 7
#define ROLL 8

class ControlSticks {
  public:
    ControlStick throttle;
    ControlStick yaw;
    ControlStick pitch;
    ControlStick roll;

    ControlSticks();
    void printValues();
    void updateValues();
    void bias();
};
