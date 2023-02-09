#include <Arduino.h>

double sinValue = 0.0;
double cosValue = 0.0;
double i = 0.0;

void printSinCos()
{
  double stepSize = 0.01f;
  for (i = 0.0; i <= PI; i += stepSize)
  {
    sinValue = sin(i);
    cosValue = cos(-i);
    Serial.print(sinValue);
    Serial.print(" ");
    Serial.println(cosValue);
  }
}

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop()
{
  // put your main code here, to run repeatedly:
  printSinCos(); // Prints a sine wave and a cosine wave to serial, which can be viewed on a plotter like the Arduino IDE plotter.
}