int forceAnalogInPin = A4;
const int forceOffset = 325;
int forceIs;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  forceIs = analogRead(forceAnalogInPin) - forceOffset;
  delay(10);
  Serial.println(forceIs);
  delay(10);
  
  // put your main code here, to run repeatedly:

}
