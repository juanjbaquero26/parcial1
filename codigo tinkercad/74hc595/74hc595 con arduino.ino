// original
//
#include <Wire.h>
int numero[8];
int count = 0, count1 = 0, k = 0, n = 0;
void setup()
{
  pinMode(13, INPUT);
  Serial.begin(9600);
  Wire.begin(0xFF);
  Wire.onReceive(recibir);
}

void loop()
{
}

void recibir(int x){
  while(Wire.available()){
    int t = Wire.read();    
    numero[k] = t;
    Serial.println(t);
    k++;
  }
  int t = digitalRead(13);
  if(digitalRead(13) == 1){
   count++; 
  }
  if(count > 3){
    count1++;
    if(count1 == 1){
      for(int i = 0, j = 128; i < 8; i++, j = j/2){
       n = j* numero[i];
      }
      count = 0;
      count1 = 0;
    }
  }
    
}
