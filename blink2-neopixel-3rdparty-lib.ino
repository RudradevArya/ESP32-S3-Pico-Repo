#include <Adafruit_NeoPixel.h>

#define LED_INBUILT 21
#define NUM 1

Adafruit_NeoPixel pixels(NUM, LED_INBUILT, NEO_GRB + NEO_KHZ800);

void setup(){
  pixels.begin();
}

void loop(){
  pixels.clear();
  for(int i=0; i<NUM; i++) {
    pixels.setPixelColor(i, pixels.Color(0, 150, 0));
    pixels.show();
    delay(500);
    Serial.println("RED");

    pixels.setPixelColor(i, pixels.Color(150, 0, 0));
    pixels.show();
    delay(500);
    Serial.println("Green");

    pixels.setPixelColor(i, pixels.Color(0, 0, 150));
    pixels.show();
    delay(500);
    Serial.println("Blue");
  }
}
