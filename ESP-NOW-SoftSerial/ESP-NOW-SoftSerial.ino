#include <SoftwareSerial.h>
#include <Arduino.h>
#include <ESP8266WiFi.h>


#define rxPin 14
#define txPin 12

SoftwareSerial swSerial(rxPin, txPin);

void setup() {
  WiFi.disconnect();
  pinMode(rxPin, INPUT);
  pinMode(txPin, OUTPUT);
  Serial.begin(115200);
  swSerial.begin(9600);
}


void loop() {
  Serial.println("\nSoftware serial slave");
  delay(2000);
}
