int gas =0;
const int mq2pin = A0;
int buzzer = 4;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(mq2pin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  float sensorValue;
  sensorValue= analogRead(mq2pin);
  if(sensorValue > 700.00){
    tone(buzzer,500,500);
  }
  Serial.println(sensorValue);
  delay(1000);
}
