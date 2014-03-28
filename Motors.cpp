#include "Motors.h"

Motors::Motors() {
  fore.attach(FORE);
  aft.attach(AFT);
  port.attach(PORT);
  starboard.attach(STARBOARD);
}

void Motors::setMin(long value) {
  fore.setMin(value);
  aft.setMin(value);
  port.setMin(value);
  starboard.setMin(value);
}

void Motors::setMax(long value) {
  fore.setMax(value);
  aft.setMax(value);
  port.setMax(value);
  starboard.setMax(value);
}
