
#include <Stepper.h>
#include <Arduino.h>

const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
// ULN2003 Motor Driver Pins
#define IN1 18
#define IN2 17
#define IN3 16
#define IN4 19
// initialize the stepper library
Stepper myStepper(stepsPerRevolution, IN1, IN2, IN3, IN4);

void setup() {
  // set the speed at 5 rpm
  myStepper.setSpeed(50);
  // initialize the serial port
  Serial.begin(9600);
}

void loop() {
  // step one revolution in one direction:
  Serial.println("clockwise");
  myStepper.step(-stepsPerRevolution);
  delay(1000);
  // step one revolution in the other direction:
  Serial.println("counterclockwise");
  myStepper.step(stepsPerRevolution);
  delay(1000);
}
