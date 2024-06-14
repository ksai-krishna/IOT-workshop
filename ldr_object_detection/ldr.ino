int ldr_pin =8;
void setup() {
  // put your setup code here, to run once:
    pinMode(ldr_pin,INPUT);
    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value=digitalRead(ldr_pin);
  Serial.print("LDR OUTPUT");
  Serial.println(value);
  delay(2000);
}
