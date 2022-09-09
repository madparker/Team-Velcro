#include <Stepper.h>

const int stepsPerRevolution = 200;
// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

int stepCount = 0;         // number of steps the motor has taken

void setup() {
}

void loop() {
  // step one step:
  for(int i = 0; i < 50; i++){ //change the 10 to the number of steps you want to rotate
    myStepper.step(1);
    delay(50);
  }
  delay(1000);  //change to the delay you want between rotations
} 
