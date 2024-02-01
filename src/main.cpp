#include <Arduino.h>
#include <FastLED.h>

// LED 1
#define NUM_LEDS 20
#define LED_PIN 26
CRGB leds[NUM_LEDS];

//hue values
uint8_t ceiling_hue = 0; // LED 1

//saturation values
uint8_t ceiling_sat = 255; //LED 1

//value values
uint8_t ceiling_val = 130; // LED 1

void setup() {
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);         // LED 1

  FastLED.setBrightness(127); // 0 - 255
  FastLED.clear();
  FastLED.show();
}

void loop() {

  // LED 1
  for ( int i=0; i < 144; i++)
    leds[i].setHSV(ceiling_hue,ceiling_sat,ceiling_val);
    FastLED.show();

}