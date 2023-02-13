# include <Servo.h>
Servo myservo;
int positionDesired = 40;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(1000);
  myservo.attach(3);

}

void loop() {
  // put your main code here, to run repeatedly:
  myservo.write(positionDesired);

}
