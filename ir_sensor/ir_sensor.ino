int Ir_pin = 8;
int cnt= 0;
void setup()
{
  pinMode(Ir_pin,INPUT);
  Serial.begin(9600);
}
void loop()
{
  int value=digitalRead(Ir_pin);
  if(value==0)
  {
    Serial.println("countvalue"+String(cnt++));
    delay(2000);
  }
}
