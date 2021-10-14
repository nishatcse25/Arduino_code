//Logic Gates: AND

int a;
int b;
void setup()
{
  pinMode(13,OUTPUT);
  pinMode(12,INPUT);
  pinMode(11,INPUT);
}

void loop()
{
  a=digitalRead(11);
  b=digitalRead(12);
  
  if (a == HIGH && b == HIGH) 
  { 
    digitalWrite(13,HIGH);
 }
  else{
    digitalWrite(13,LOW);
  }
}
