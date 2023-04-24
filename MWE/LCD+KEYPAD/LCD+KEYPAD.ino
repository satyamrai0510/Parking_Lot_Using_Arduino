#include<Keypad.h>
#include<LiquidCrystal.h>

int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

const byte ROWS=4;
const byte COLS=4;

char hexaKeys[ROWS][COLS]={
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins [ROWS]={0,1,6,7};
byte colPins [COLS]={8,9,10,13};
Keypad customkeypad=Keypad(makeKeymap(hexaKeys), rowPins,colPins,ROWS, COLS);

void setup(){
  lcd.begin(16,2);
  lcd.begin(16, 2);
}

void loop(){
  char customKey=customkeypad.getKey();
  if (customKey){
    lcd.setCursor(0, 0);
    lcd.print(customKey);
  }
}