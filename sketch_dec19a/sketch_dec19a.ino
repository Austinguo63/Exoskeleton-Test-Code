int servoAnalogInPin = A3;
int posIs;
float posIsDeg;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  posIs = analogRead(servoAnalogInPin);
  posIsDeg = (90.0/(507.0-315.0))*(posIs-315.0);
  Serial.print("Position:[degrees]:");
  Serial.println(posIsDeg);
  delay(100);

  //0 315
  //90 507
  
}
