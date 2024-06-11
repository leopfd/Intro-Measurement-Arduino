// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}
void loop() {
  float sensorValue = analogRead(A0);
  float voltageValue = sensorValue*5./1023.;
  float tempValue = (voltageValue-0.5)*100;
  float t = millis()/1000;
  //Serial.println(sensorValue);
  //Serial.print(voltageValue);
  Serial.print(t);
  Serial.print(",");
  Serial.println(tempValue);
  delay(1000);        // delay in between reads for stability
}
