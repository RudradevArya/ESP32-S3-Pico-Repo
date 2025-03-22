#define LED_BUILTIN 21
void setup(){
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  Serial.println("LEDDDD");

  neopixelWrite(LED_BUILTIN,RGB_BRIGHTNESS,0,0); // Red
  delay(1000);
  neopixelWrite(LED_BUILTIN,0,RGB_BRIGHTNESS,0); // Green
  delay(1000);
  neopixelWrite(LED_BUILTIN,0,0,RGB_BRIGHTNESS); // Blue
  delay(1000);
  neopixelWrite(LED_BUILTIN,0,0,0); // Off / black
  delay(1000);
}
