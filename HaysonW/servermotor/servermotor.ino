#include <Servo.h>

Servo myServo;  // create servo object to control a servo

static unsigned int degreeOfMovement = 180;    // variable to read the value from the analog pin

void setup() {
  myServo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  myServo.write(degreeOfMovement);                // sets the servo position according to the set value
  delay(5000);                                    // waits for the servo to get there
  myServo.write(0);                               // returns the servo to 0
  delay(5000);                                    // waits for the servo to get there
}