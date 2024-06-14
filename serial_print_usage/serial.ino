int cnt;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  if (cnt<10)
  {
  Serial.print("Seconds:");
  Serial.println(cnt++);
  delay(1000);
}
}
