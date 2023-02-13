const int button1 = 8;
const int button2 = 9;
const int ledPin = 4;
int buttonState1 = 0;
int buttonState2 = 0;
int state = 0;
int posIs;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState1 = digitalRead(button1);
  buttonState2 = digitalRead(button2);
    if(buttonState1 == LOW){
      state = 0;
      digitalWrite(ledPin, HIGH);
      delay(50);
      digitalWrite(ledPin, LOW);
      delay(50);
    }
    if(buttonState2 == LOW){
      state = 1;
      digitalWrite(ledPin, HIGH);
      delay(50);
      digitalWrite(ledPin, LOW);
      delay(50);
    }
    else{
    digitalWrite(ledPin, HIGH);
    }
    

}
