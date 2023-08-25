#include <LiquidCrystal.h>

LiquidCrystal lcd(3, 4, 8, 9, 10, 11); // Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7)

void setup() {
  lcd.begin(16, 2);
  lcd.print("Violet, blue, green, red to keep me out, I win");
}
void loop() {
  lcd.scrollDisplayLeft();
  delay(125);
}
