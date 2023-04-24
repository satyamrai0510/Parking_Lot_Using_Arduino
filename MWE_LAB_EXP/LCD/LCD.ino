#include <LiquidCrystal.h>
int Contrast=100;

int rs=12,en=13,d4=10,d5=9,d6=8,d7=7;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup() {
  analogWrite(11, Contrast);
  lcd.begin(20, 4);
}

void loop() {  
  lcd.setCursor(0,0);
  lcd.print("satyam");
  lcd.setCursor(0,1);
  lcd.print("satyam");
  lcd.setCursor(0,2);
  lcd.print("satyam");
  lcd.setCursor(0,3);
  lcd.print("satyam");
  
  delay(1000);
}