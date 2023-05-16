/*
  Electronic Ardunio GPIO Tester v1.0

  Created by: Andres Garcia Alves <andres.garcia.alves@gmail.com>
  
  Version 1.0, 2023.05.07 - Initial release.

  This source code is licensed under GPL v3.0  
*/

int gpio[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, A0, A1, A2, A3, A4, A5, A6, A7 };
int gpioLen = sizeof(gpio)/sizeof(int);

void setup() {

  for (int i = 0; i < gpioLen; i++) {
    pinMode(gpio[i], OUTPUT);
  }
}

void loop() {

  for (int i = 0; i < gpioLen; i++) {
    digitalWrite(gpio[i], HIGH);
  }
  delay(5000);

  for (int i = 0; i < gpioLen; i++) {
    digitalWrite(gpio[i], LOW);
  }
  delay(1000);
}
