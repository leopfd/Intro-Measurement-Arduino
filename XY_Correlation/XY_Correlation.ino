void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float X[] = {5, 1, 7, 3, 7, 2, 3, 9, 0, 4};
  float Y[] = {6, 3, 9, 0, 1, 3, 6, 8, 5, 2};
  float sumX = 0; 
  float sumY = 0;
  int N = 10;
  for (int i = 0; i < N; i++) {
    sumX = sumX + X[i];
    sumY = sumY + Y[i];
    delay(1);
  }
  float meanX = sumX/N;
  float meanY = sumY/N;
  float sqDiffSumX = 0;
  float sqDiffSumY = 0;
  for (int i = 0; i < N; i++) {
    sqDiffSumX = sqDiffSumX + pow(X[i] - meanX, 2);
    sqDiffSumY = sqDiffSumY + pow(X[i] - meanY, 2);
    delay(1);
  }
  float diffSumXY = 0;
  for (int i = 0; i < N; i++) {
    diffSumXY = diffSumXY + (X[i] - meanX)*(Y[i] - meanY);
  }
  float sigmaX = sqrt(sqDiffSumX/(N-1));
  float sigmaY = sqrt(sqDiffSumY/(N-1));
  float Cxy = (diffSumXY)/((N-1)*(sigmaX)*(sigmaY));
  Serial.print("Mean X: ");
  Serial.println(meanX);
  Serial.print("Mean Y: ");
  Serial.println(meanY);
  Serial.print("Sigma X: ");
  Serial.println(sigmaX);
  Serial.print("Sigma Y: ");
  Serial.println(sigmaY);
  Serial.print("XY Correlation: ");
  Serial.println(Cxy);
  delay(10000000);
}
