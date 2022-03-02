// conexion de arduinos con softwareserial.h
#include<SoftwareSerial.h>
SoftwareSerial mySerial(7,6);
unsigned char numero;
void setup()
{
  Serial.begin(9600);
  mySerial.begin(4800);
}

void loop()
{
  if(mySerial.available()){
   numero = mySerial.read(); 
   Serial.println(numero);
   delay(500);
  }
}