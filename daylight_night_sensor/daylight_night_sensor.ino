int ldr_pin =8;
int led=3;
int buzzer =4;
void setup() {
  // put your setup code here, to run once:
    pinMode(ldr_pin,INPUT);
    pinMode(led,OUTPUT);
    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value=digitalRead(ldr_pin);
  if(value){
    tone(buzzer,5000,1000);
    digitalWrite(led,HIGH);
    Serial.print("Its night");
  }else{
    digitalWrite(led,LOW);
    Serial.print("Day");
  }
  Serial.print("LDR OUTPUT");
  Serial.println(value);
  delay(2000);
}
