void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int runs = 10;
  float sum = 0;
  float sensorValue;
  float voltageValue[runs];
  for (int i = 0; i < runs; i++) {
    sensorValue = analogRead(A0);
    voltageValue[i] = sensorValue*5./1023.;
    sum = sum + voltageValue[i];
    //Serial.println(voltageValue[i]);
    //Serial.println(sum);
    delay(1);
  }
  float mean = sum/runs;
  float diffSum = 0;
  for (int i = 0; i < runs; i++) {
    diffSum = diffSum + pow(voltageValue[i] - mean, 2);
    //Serial.println(diffSum);
    delay(1);
  }
  float sigma = sqrt(diffSum/(runs-1));
  float error = mean/sqrt(runs);
  float my_data[400];
  Serial.println(mean);
  //Serial.print(", ");
  //Serial.print(sigma);
  //Serial.print(", ");
  //Serial.println(error);
  delay(10);
}
