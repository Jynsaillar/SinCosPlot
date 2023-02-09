#include <Arduino.h>

float sinValue = 0.0f;
float cosValue = 0.0f;

void printSinCos()
{
  float stepSize = 0.1f;
  for (float i = 0.0f; i < PI; i += stepSize)
  {
    sinValue = sin(i);
    cosValue = cos(i);
    Serial.print(sinValue);
    Serial.print(",");
    Serial.println(cosValue);
    delay(100);
  }

  for (float j = PI; j > stepSize; j -= stepSize)
  {
    sinValue = sin(j);
    cosValue = cos(j);
    Serial.print(sinValue);
    Serial.print(",");
    Serial.println(cosValue);
    delay(100);
  }
}

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop()
{
  // put your main code here, to run repeatedly:
  printSinCos(); // Prints a sine wave and a cosine wave to serial, which can be viewed on a plotter like the Arduino IDE plotter.
  delay(250);
}