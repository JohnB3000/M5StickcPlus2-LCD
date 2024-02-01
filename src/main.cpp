#include <Arduino.h>

#include "M5StickCPlus2.h"

void setup() {
    auto cfg = M5.config();
    StickCP2.begin(cfg);
    StickCP2.Display.setRotation(1);
    StickCP2.Display.setTextColor(GREEN);
    StickCP2.Display.setTextDatum(middle_center);
    StickCP2.Display.setTextFont(&fonts::Orbitron_Light_24);
    StickCP2.Display.setTextSize(1);
    StickCP2.Display.drawString("Power LED", StickCP2.Display.width() / 2,
                                StickCP2.Display.height() / 2);
}

void loop() {
    // inside power red led control
    StickCP2.Power.setLed(1);
    delay(1000);
    StickCP2.Power.setLed(0);
    delay(1000);
}