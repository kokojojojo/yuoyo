#include <LiquidCrystal.h>
 

LiquidCrystal lcd(3, 4, 8, 9, 10, 11);
//#include <LiquidCrystalRus.h>
//setlocale(LC_ALL, "Russian");
int termo= A0;
int val;
float voltage;
int temp;

void setup() {
  //setlocale(LC_ALL, "Russian");
  // put your setup code here, to run once:
lcd.begin(16, 2);
lcd.print("Temperature is");
lcd.setCursor(3, 1);
lcd.print("C");
}

void loop() {
  //setlocale(LC_ALL, "Russian");
  // put your main code here, to run repeatedly:
val = analogRead(termo);
voltage = (val*5.0/1023);
temp = voltage*100-273.15;

delay(1000);

lcd.setCursor(0, 1);
lcd.print(temp);

}
