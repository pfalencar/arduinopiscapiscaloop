int i;

void setup()
{
  for (i = 12; i >= 8; i=i-1){
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  for (i = 12; i >= 8; i=i-1){
    digitalWrite(i, HIGH);
  	delay(300); 
  	digitalWrite(i, LOW);
  }
   for (i = 8; i <= 12; i=i+1){
    digitalWrite(i, HIGH);
  	delay(300); 
  	digitalWrite(i, LOW);
   }
}
