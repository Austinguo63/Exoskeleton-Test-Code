int emgAnalogInPin1 = A1;
int emgAnalogInPin2 = A2;
int emgSignal1 = 0;
int emgSignal2 = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  digitalWrite(4, HIGH);
}

void loop() {
  emgSignal1 = analogRead(emgAnalogInPin1);
  emgSignal2 = analogRead(emgAnalogInPin2);
  Serial.print("emgSignal1:");
  Serial.print(emgSignal1);
  Serial.print(",");
  Serial.print("emgSignal2:");
  Serial.println(emgSignal2);
  delay(100);
  // put your main code here, to run repeatedly:

}
