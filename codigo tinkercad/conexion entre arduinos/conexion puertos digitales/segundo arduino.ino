// conexion de arduinos con puertos digitales
// segundo arduino
int val[8];
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(12)){
    for(int i = 0; i <8; i++){
   		val[i] = digitalRead(13);
      	Serial.print(val[i]);
      	delay(100);
    } 
    Serial.println();
  }
}