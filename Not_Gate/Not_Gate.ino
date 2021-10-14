
int a;
void setup()
{
  pinMode(13,OUTPUT);
  pinMode(12,INPUT);
}
void loop()
{
  a=digitalRead(12);
  
  if(a==HIGH)
  {
    digitalWrite(13,LOW);
  }
  else {
    digitalWrite(13,HIGH);
  }
}
