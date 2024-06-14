#include<LiquidCrystal.h>

const int rs = 7, en = 6, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.setCursor(1, 0);
  lcd.print("WELCOME TO");
  delay(1000);
  lcd.clear();
  lcd.setCursor(8, 1);
  lcd.print(" CIT");
}

void loop() {
  // put your main code here, to run repeatedly:

}
