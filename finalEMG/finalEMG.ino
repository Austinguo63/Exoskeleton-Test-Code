#include <Servo.h>
Servo myservo;

int emgAnalogInpin = A1;
int emgSignal = 0;
int motorPosition =160 ;
int threshold = 150;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(100);


}
//0 351
//90 501

void loop() {
  // put your main code here, to run repeatedly:
  emgSignal = analogRead(emgAnalogInpin);
  Serial.println(emgSignal);
  if(emgSignal>threshold){
    myservo.attach(3);
    myservo.write(motorPosition);
    delay(100);
    myservo.detach();
    
  }
  
  
  delay(10);
}
