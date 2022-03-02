// conexion de arduinos con softwareserial.h
#include<SoftwareSerial.h>
SoftwareSerial mySerial(6,7);
char numero[] = {1,2,3,4,5,6,7,8};
void setup()
{
  Serial.begin(9600);
  mySerial.begin(4800);
}

void loop()
{
  mySerial.listen();
  for(int i = 0; i < 8; i++){
  mySerial.write(numero[i]);
  delay(500);
  }
}