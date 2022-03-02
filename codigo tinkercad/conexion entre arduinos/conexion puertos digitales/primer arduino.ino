// conexion de arduinos con puertos digitales
//primer arduino
int numero[] = {1,2,3,4,5,6,7,8};
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  for(int i = 0; i < 8; i++){
    digitalWrite(12, HIGH);
    for(int j = 0; j < 8; j++){
    	digitalWrite(13,((numero[i] << j) & 0b10000000) == 0b10000000);
		delay(100);
    }
     digitalWrite(12,LOW);
  }
}