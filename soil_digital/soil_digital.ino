const int mos_pin = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode(mos_pin,INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.print("Soil condition");
  Serial.println(digitalRead(mos_pin));
  delay(2000);
}
