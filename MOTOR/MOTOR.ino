byte x;
void setup() {
  pinMode (12,INPUT);
  pinMode (7,OUTPUT);
}

void loop() {
  x= digitalRead(12);
  if (x==HIGH){
    digitalWrite(7,HIGH);
  }
  else
  {
    digitalWrite(7,LOW);
  }

}
