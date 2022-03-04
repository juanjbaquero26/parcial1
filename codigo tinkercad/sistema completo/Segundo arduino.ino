// original
//
#include <LiquidCrystal.h>
#include <SoftwareSerial.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int  count = 0 , count1 = 0;
unsigned char x;
SoftwareSerial mySerial(6,7);
void setup()
{
  pinMode(13, INPUT);
  Serial.begin(9600);
  mySerial.begin(4800);
  lcd.begin(16,2);
  
}

void loop()
{
    if(mySerial.available()){ 
      
  	x = mySerial.read();
      Serial.println(x);
  	
      if(count >= 10){
       count1++;
        if(count1 == 22){ 
       lcd.setCursor(0,0);
       lcd.print("El numero es: ");
       lcd.setCursor(0,1);
       lcd.print(x);
       Serial.println(x);
       count = 0;
       count1 = 0; 
        
        } 
      }
      
      
    }
    if(digitalRead(13)){
      count ++;
      delay(450);
    }
  
  
  }
