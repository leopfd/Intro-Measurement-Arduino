void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int i = 0;
while(i<175){
  digitalWrite(13, HIGH);
  float initialValue = analogRead(A0);
  float initialVoltage = initialValue*5./1023.;
  float finalValue = analogRead(A1);
  float finalVoltage = finalValue*5./1023.;
  Serial.print(initialVoltage);
  Serial.print(", ");
  Serial.println(finalVoltage);
  i++;
  delay(1);
}
int j = 0;
while(j<175){
  digitalWrite(13, LOW);
  float initialValue = analogRead(A0);
  float initialVoltage = initialValue*5./1023.;
  float finalValue = analogRead(A1);
  float finalVoltage = finalValue*5./1023.;
  Serial.print(initialVoltage);
  Serial.print(", ");
  Serial.println(finalVoltage);
  j++;
  delay(1);
}
}
