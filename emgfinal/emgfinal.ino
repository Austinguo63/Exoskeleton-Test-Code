
#include <Servo.h>
Servo myservo;
int plugUsed = A2;
int emgSignal = 0;
int motorPosition = 100;
int threshold = 600;

void setup() {
  Serial.begin(9600);
  delay(100);
  pinMode(4,OUTPUT);
  digitalWrite(4,HIGH);
  
  // put your setup code here, to run once:

}

void loop() {
  emgSignal = analogRead(plugUsed);
  if(emgSignal >threshold){
    myservo.attach(3);
    delay(100);
    myservo.write(motorPosition);
    delay(100);
    myservo.detach();
    
  }
  delay(100);
  // put your main code here, to run repeatedly:

}
