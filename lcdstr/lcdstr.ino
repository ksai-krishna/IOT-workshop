#include<LiquidCrystal.h>

const int rs = 7, en = 6, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);

}
void loop() {
  lcd_str("Hello", 0, 0);
  lcd_str("CIT", 0, 1);
  lcd.clear();
}
void lcd_str(String str, char col, char row) {
  lcd.setCursor(col, row);
  lcd.print(str);
}
