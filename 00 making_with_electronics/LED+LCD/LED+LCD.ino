int led1=8;
int led2=9;
#include <LiquidCrystal.h>
int Contrast=100;

int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup() {
 Serial.begin(9600);
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
 analogWrite(6, Contrast);
 lcd.begin(16, 2);
}

void loop() {
Serial.println("Enter '1 OR 2' for led '1 OR 2' to glow:");
while(Serial.available()==0){}
int A = Serial.parseInt();

if(A==1){
  lcd.clear();
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  lcd.setCursor(0,0);
  lcd.print("LED 1 glows");
  lcd.setCursor(0,1);
  lcd.print("LED 2 dims");
}
else if(A==2){
  lcd.clear();
  digitalWrite(led2, HIGH);
  digitalWrite(led1, LOW);
  lcd.setCursor(0,1);
  lcd.print("LED 2 glows");
  lcd.setCursor(0,0);
  lcd.print("LED 1 dims");
}
else{
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  lcd.clear();
  lcd.setCursor(0,6);
  lcd.print("error 404");
}
}
