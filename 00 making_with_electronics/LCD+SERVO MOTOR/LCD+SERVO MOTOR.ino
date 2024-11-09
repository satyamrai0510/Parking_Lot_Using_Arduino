#include <LiquidCrystal.h>
#include <Servo.h>

Servo myservo;
int Contrast=100;
int pos = 0;
int ledR=13;
int ledG=7;

int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup() {
  analogWrite(6, Contrast);
  lcd.begin(16, 2);
  myservo.attach(9);
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
}

void loop() { 
  digitalWrite(ledR, HIGH);
  digitalWrite(ledG, HIGH); 
  
  for (pos = 18; pos <= 130; pos += 1) {
    myservo.write(pos);
    delay(5);
  lcd.setCursor(0,0);
  lcd.print("GATE OPEN");
  lcd.noAutoscroll();
  }
  for (pos = 130; pos >= 18; pos -= 1) {
    myservo.write(pos);
    delay(60);

  }
  lcd.setCursor(0,1);
  lcd.print("1 VEHICLE");
  lcd.noAutoscroll();


}