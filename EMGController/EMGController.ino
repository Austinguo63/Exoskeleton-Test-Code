#include <Servo.h>
Servo myservo;

int emgAnalogInpin = A1;
int emgSignal = 0;
int motorPosition =90 ;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(1000);
  myservo.attach(3);

}
//0 351
//90 501

void loop() {
  // put your main code here, to run repeatedly:
  emgSignal = analogRead(emgAnalogInpin);
  motorPosition = map(emgSignal, 0, 600, 85, 501);
  myservo.write(motorPosition);
  Serial.println(emgSignal);
  delay(100);
}
