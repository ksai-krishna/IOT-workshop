const int button = 8;
const int led=2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(button,INPUT);
  pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int value = digitalRead(button);
//  Serial.print("Button value:");
//  Serial.println(value);
  digitalWrite(led,LOW);
  if(value==1){
    digitalWrite(led,HIGH);
    delay(1000);
    digitalWrite(led,LOW);
    delay(1000);
0  }
   
}
