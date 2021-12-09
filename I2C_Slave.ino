#include <Wire.h>

const int ledPin = 13;

void setup() {
  Wire.begin(0x25);
  Wire.onReceive(receiveEvent);
  Serial.begin (9600);
}

void receiveEvent(int howMany) {
  while (Wire.available()) { // loop through all but the last
    char c = Wire.read(); // receive byte as a character
    Serial.println (c);
    //Serial.print (c/16);
    //Serial.println (c%16);
  }
}

void loop() {}
