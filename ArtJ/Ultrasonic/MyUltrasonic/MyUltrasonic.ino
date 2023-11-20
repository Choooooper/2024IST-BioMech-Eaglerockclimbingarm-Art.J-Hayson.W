#include "Ultrasonic.h"

#include "Ultrasonic.cpp"

Ultrasonic myUltrasonicSensor(5);

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  long RangeInCentimeters;
  RangeInCentimeters = myUltrasonicSensor.MeasureInCentimeters(); // Two measurements should keep an interval
  Serial.print(RangeInCentimeters);//0~400cm
  Serial.println(" cm");
  delay(250);
}