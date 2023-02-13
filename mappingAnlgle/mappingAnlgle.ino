#include<Servo.h>
Servo myservo;
int servoAnalogInPin = A3;
int poseServo1 = 160;
int poseServo2 = 120;
int poseSensor1;
int poseSensor2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(1000);
  myservo.attach(3);


}

void loop() {
  // put your main code here, to run repeatedly:
  myservo.write(poseServo1);
  delay(2000);
  poseSensor1 = analogRead(servoAnalogInPin);
  Serial.println(poseServo1);
  Serial.println(poseServo2);
  Serial.println(poseSensor1);
  Serial.println(poseSensor2);
  

}
