#include <Arduino.h>
#include <math.h>

int brightness1 = 0;
int brightness2 = 0;
double d = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(9, brightness1);
  analogWrite(10, brightness2);

  brightness1 = sin(d)*255;
  brightness2 = abs(cos(d))*255;
  // brightness2 = abs(cos(d - PI + PI/3))*255;
  d -=- PI/64;
  if (d >= PI | d <= 0) {
    d = 0;
  }
  delay(15.625); // 60fps delay
}