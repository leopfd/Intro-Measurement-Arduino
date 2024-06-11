void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  float sensorValue = analogRead(A0);
  float voltageValue = sensorValue*5./1023.;
  float resistanceValue = 10000.;
  float currentValue = voltageValue/resistanceValue*1000;
  float t = millis()/1000;
  if (voltageValue <= 1) {
    digitalWrite(3, HIGH);
  }
  else {
    digitalWrite(3, LOW);
  }
  Serial.print(t);
  Serial.print(", ");
  Serial.println(currentValue);
  delay(100);
}
