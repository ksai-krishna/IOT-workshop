#include<LiquidCrystal.h>
int temp_pin =A0;
float temp;
int buzzer=8;
const int rs = 7, en = 6, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup(){
  pinMode(temp_pin,INPUT);
  Serial.begin(9600);
}

void loop(){
  temp=analogRead(temp_pin)*0.00488*100; // 0.00488 is the step size used to convert analog to digital signal this is called quantization
  lcd.setCursor(0, 0);
  lcd.print("Checking");
  lcd.print("Temperature");
  lcd.clear();
  if(temp>31){
    tone(buzzer,50,50);
    lcd.print("Temp crossed 31C");
  }
  delay(1000);
  lcd.setCursor(10, 0);
  lcd.print(temp);
  delay(2000);
}
