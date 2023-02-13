#include <Servo.h>
Servo myservo;
int positionDesired;
int counter = 0;
int reps =5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(1000);
  myservo.attach(3);

}

void loop() {
  // put your main code here, to run repeatedly:
  positionDesired = 0;
  myservo.write(positionDesired);
  delay(1000);
  positionDesired =90;
  myservo.write(positionDesired);
  delay(1000);
  counter++;
  if(counter == reps)
  {
    exit(0);
  
  }

}
