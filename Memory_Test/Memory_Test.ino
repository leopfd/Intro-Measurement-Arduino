#include <EEPROM.h>
int a = 0;
int value;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //float my_data[8192];
  value = EEPROM.read(a);
  Serial.print(a);
  Serial.print(", ");
  Serial.print(value);
  Serial.println();
  a = a++;
  if (a == 512)
    a = 0;
  delay(1000);
}
