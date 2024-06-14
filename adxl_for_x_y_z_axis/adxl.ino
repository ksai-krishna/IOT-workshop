const int x_pin = A0;
const int y_pin = A1;
const int z_pin = A2;
void setup() {
  pinMode(x_pin,INPUT);
  pinMode(y_pin,INPUT);
  pinMode(z_pin,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  
Serial.println("x_out:"+String(analogRead(x_pin)));
Serial.println("y_out:"+String(analogRead(y_pin)));

Serial.println("z_out:"+String(analogRead(z_pin)));

Serial.println("..................................");

delay(2000);
}
