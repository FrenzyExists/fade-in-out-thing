#line 1 "/home/pikachu/Documents/arduino-projects/fade-in-out/src/main.cpp"
#include <Arduino.h>

int brightness = 0;
int delta_brightness = 5;


void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
}