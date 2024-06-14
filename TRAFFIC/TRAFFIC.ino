const int red=1;
const int yellow=2;
const int green=3;
const int led1=4;
const int led2=5;
const int led3=6;

void setup() {
 pinMode(red,OUTPUT);
 pinMode(yellow,OUTPUT);
 pinMode(green,OUTPUT);
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(red,HIGH);
  digitalWrite(yellow,LOW);
  digitalWrite(green,LOW);
  delay(100);
  digitalWrite(red,LOW);
  digitalWrite(yellow,HIGH);
  digitalWrite(green,LOW);
  delay(150);
    digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(green,HIGH);
  delay(150);
  delay(150);
    digitalWrite(led1,HIGH);
  
  delay(200);
  digitalWrite(led2,HIGH);
  // put your main code here, to run repeatedly:

}
