#include <Arduino.h>

void setup() {
  pinMode(GPIO_NUM_36, INPUT);
  Serial.begin(115200);
}

void loop() {
  Serial.println(digitalRead(GPIO_NUM_36));
  delay(300);
}