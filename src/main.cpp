#include <Arduino.h>

#include "M5StickCPlus2.h"

void setup() {
    auto cfg = M5.config();
    StickCP2.begin(cfg);
    StickCP2.Display.setRotation(1);
    StickCP2.Display.setTextColor(GREEN);
    StickCP2.Display.setTextFont(&fonts::Orbitron_Light_24);
    StickCP2.Display.setTextSize(1.5); 
}

void loop() {
    StickCP2.Display.clear();
    StickCP2.Display.setCursor(35, 40);
    auto dt = StickCP2.Rtc.getDateTime();
    StickCP2.Display.printf("%02d:%02d:%02d",
                            dt.time.hours, dt.time.minutes,
                            dt.time.seconds);
    sleep(1);
}