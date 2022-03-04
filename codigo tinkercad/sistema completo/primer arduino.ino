#include <Wire.h>
#include<SoftwareSerial.h>
int latchPin = 12;            //connect 595 ’ pin 12
int clockPin = 11;           //connect 595 ’s pin11 
int dataPin = 13;           // connect 595 ’s pin 14
char numero[] = {146,146,146,146,146,146,146,146,146,146,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};//{146,12,12,12,123,146,1,12};
//int 
int size = sizeof(numero)/sizeof(*(numero));
int t;
SoftwareSerial mySerial(7,6);
void setup()
{
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  mySerial.begin(4800);
  
}

void loop(){
  //if(flag == 0){
  mySerial.listen();
  //}
  for(int i = 0; i < size; i++){  
      	mySerial.write(numero[i]);      
    	digitalWrite(latchPin,LOW);
    	shiftOut(dataPin, clockPin, LSBFIRST, numero[i]); 
    	digitalWrite(latchPin,HIGH);
      	delay(500);  
 
    }
  	//flag == 1;
  	//mySerial.end();
}

