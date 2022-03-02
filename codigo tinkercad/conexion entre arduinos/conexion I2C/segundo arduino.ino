//conexion arduinos por I2C
// Slave
#include<Wire.h>

void setup()
{
  Wire.begin(0x12);
  Wire.onReceive(recibir);
  Serial.begin(9600);
}

void loop()
{
    
}

void recibir(int x){
  while(Wire.available()>0){
   	Serial.println((char)Wire.read());
  }
}



