#include <Servo.h>
Servo myservo;
int pos = 0;
void setup() {
  // put your setup code here, to run once:
  myservo.attach(3);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  for (pos = 0; pos <= 90; pos += 1){
    myservo.write(pos);
    delay(15);
  }
  delay(300);
  for(pos = 90; pos >= 0; pos -= 1){
    myservo.write(pos);
    delay(15);
  }
  delay(30000);

}
