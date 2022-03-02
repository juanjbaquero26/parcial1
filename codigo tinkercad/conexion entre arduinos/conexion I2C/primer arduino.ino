//conexion arduinos por I2C
// Master
#include<Wire.h>

void setup()
{
  Wire.begin();
  Serial.begin(9600);
  Serial.println("Ingrese un caracter: ");
}

void loop()
{ 	
  if(Serial.available()>0){
    	char n = Serial.read();
		Wire.beginTransmission(0x12);
  		Wire.write(n);
  		Wire.endTransmission();
  }
}