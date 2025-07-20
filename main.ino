// https://www.thingiverse.com/thing:3869385

//This adds the preexisting stepper library so you can use commands like "myStepper.setSpeed()" and "myStepper.step()"
#include <Stepper.h>

//This is the number of steps in one revolution of the motor. The 28BYJ-48 motor has 2048 steps per revolution. Make sure to find the number of steps of your motor.
const int stepsPerRevolution = 2048;

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 18, 19, 20, 21);

void setup() {
  // set the speed at 2 rpm:
  myStepper.setSpeed(2);

  // 146 steps is 1/14th of a full rotation. Since I have 14 wells, this will index the feeder one space.
  myStepper.step(145);
  //This kills the power to the stepper to save energy and to keep it from heating up.
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  //This is the delay between feeding times. During testing I found it helpful to use 1 second to make sure it was rotating well.
  delay(2000); //Pause for 2 seconds
  //delay(86400000); //Pause for 24 Hours
  //delay(86400000); //Pause
    // 146 steps is 1/14th of a full rotation. Since I have 14 wells, this will index the feeder one space.
  myStepper.step(145);
  //This kills the power to the stepper to save energy and to keep it from heating up.
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  //This is the delay between feeding times. During testing I found it helpful to use 1 second to make sure it was rotating well.
  delay(200000); //Pause for 2 seconds
  //delay(86400000); //Pause for 24 Hours
  //delay(86400000); //Pause
  
}

void loop() {

}
