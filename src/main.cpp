#include <Arduino.h>
#define LED 13

int contador = 0;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly
  digitalWrite(LED, HIGH);
  delay(0),
  digitalWrite(LED, LOW);
  delay(0); 
  Serial.println(contador++);
}