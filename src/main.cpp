#include <Arduino.h>

#include "NextionInterface.h"

NextionInterface nex(Serial1);

void setup()
{
  Serial.begin(115200);
  Serial1.begin(115200);
}

void loop()
{
  nex.update();
}
