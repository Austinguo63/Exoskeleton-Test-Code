int emgAnalogInPin = A1;
int emgSignal = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(1000);

}

void loop() {
  // put your main code here, to run repeatedly:
  emgSignal = analogRead(emgAnalogInPin);
  Serial.print("EMG: ");
  Serial.println(emgSignal);
  delay(100);

}
