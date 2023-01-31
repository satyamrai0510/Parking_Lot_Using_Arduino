#include <Servo.h>
#include <IRremote.h>
#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>

#define I2C_ADDR 0x3F
#define BACKLIGHT_PIN 3
#define En_pin 2
#define Rw_pin 1
#define Rs_pin 0
#define D4_pin 4
#define D5_pin 5
#define D6_pin 6
#define D7_pin 7
LiquidCrystal_I2C lcd(I2C_ADDR,En_pin,Rw_pin,Rs_pin,D4_pin,D5_pin,D6_pin,D7_pin);

int IRSensor1 = 3;
int IRSensor2 = 4;
int LEDG1 = 7;
int LEDG2 = 8;
int LEDR1 = 9;
int LEDR2 = 10;
Servo s1;
Servo s2;
const int RECV_PIN = 2;
IRrecv irrecv(RECV_PIN);
decode_results results;

float vacant = 4;
float occupied = 2;

void setup() {
  Serial.begin(9600);
  s1.attach(5);
  s2.attach(6);
  pinMode(IRSensor1, INPUT);
  pinMode(IRSensor2, INPUT);

  pinMode(LEDG1, OUTPUT);
  pinMode(LEDG2, OUTPUT);
  pinMode(LEDR1, OUTPUT);
  pinMode(LEDR2, OUTPUT);
  irrecv.enableIRIn();

  lcd.begin (20,4);
  lcd.setBacklightPin(BACKLIGHT_PIN,POSITIVE);
  lcd.setBacklight(HIGH);
  lcd.home ();
}

void loop() {
  
  int sensorStatus1 = digitalRead(IRSensor1);
  if (sensorStatus1 == 1) {
    digitalWrite(LEDG1, LOW);
    digitalWrite(LEDR1, HIGH);
    s1.write(90);
    delay(1000);
  } else {
    digitalWrite(LEDG1, HIGH);
    digitalWrite(LEDR1, LOW);
    s1.write(0);
    delay(2000);
    occupied = occupied + 1;
    vacant = vacant - 1;
  }

  int sensorStatus2 = digitalRead(IRSensor2);
  if (sensorStatus2 == 1) {
    digitalWrite(LEDG2, LOW);
    digitalWrite(LEDR2, HIGH);
    s2.write(90);
    delay(1000);
  } 
  else {
    digitalWrite(LEDG2, HIGH);
    digitalWrite(LEDR2, LOW);
    s2.write(180);
    delay(2000);
    occupied--;
    vacant++;
  }

  if (irrecv.decode(&results)) {
    Serial.println(results.value);
    if (results.value == 16753245) {
      s1.write(0);
      digitalWrite(LEDR1, LOW);
      digitalWrite(LEDG1, HIGH);
      delay(1000);
      occupied = occupied + 1;
      vacant = vacant - 1;
    }
    else if (results.value == 16769565) {
      s2.write(180);
      digitalWrite(LEDR2, LOW);
      digitalWrite(LEDG2, HIGH);
      delay(1000);
      occupied++;
      vacant--;
    }
    irrecv.resume();
  }

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("    Parking Lot");
  lcd.setCursor(0, 1);
  lcd.print("Total slot   : 6");
  lcd.setCursor(0, 2);
  lcd.print("Vacant slot  : ");
  lcd.print(vacant);
  lcd.setCursor(0, 3);
  lcd.print("Occupied slot: ");
  lcd.print(occupied);

  if (occupied>=6){
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("----Parking Full----");
  lcd.setCursor(0, 1);
  lcd.print("----Parking Full----");
  lcd.setCursor(0, 2);
  lcd.print("----Parking Full----");
  lcd.setCursor(0, 3);
  lcd.print("----Parking Full----");    
  }
}