// Code copied from github under Myoware_MuscleSensor / Example code / ReadAnalogVoltage
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // reads the input on analog pin 0:
  float sensorValue = analogRead(A0);
  // Converts the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5./ 1023.);
  // prints out the analog value and voltage:
  Serial.print(sensorValue);
  Serial.print(", ");
  Serial.println(voltage);
  delay(100);
}
