#include <Servo.h>
#include <IRremote.h>
#include <LiquidCrystal.h>
int IRSensor1 = 3;
int IRSensor2 = 4;
int LED1 = 0; 
int LED2 = 1;
Servo s1;
Servo s2;
const int RECV_PIN = 2;
IRrecv irrecv(RECV_PIN);
decode_results results;

int rs=12,en=13,d4=10,d5=9,d6=8,d7=7;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
float vacant = 8;
float occupied = 0;


void setup() 
{

Serial.begin(9600);
s1.attach(5);
s2.attach(6);
pinMode (IRSensor1, INPUT); 
pinMode (IRSensor2, INPUT); 
pinMode (LED1, OUTPUT); 
pinMode (LED2, OUTPUT);
irrecv.enableIRIn();
lcd.begin(20, 4);
// analogWrite(11, Contrast);

}

void loop(){
  int sensorStatus1 = digitalRead(IRSensor1); 
  if (sensorStatus1 == 1)
  {
    
    digitalWrite(LED1, LOW); 
    // Serial.println("Motion Detected!");
    s1.write(90);
    delay(1000);
       
  }
  else  {
    digitalWrite(LED1, HIGH);
    // Serial.println("Motion Ended!");
    s1.write(0);
    delay(2000);
    occupied--;
    vacant++;  
       
    }
  


int sensorStatus2 = digitalRead(IRSensor2);
if (sensorStatus2 == 1)
  {
    
    digitalWrite(LED2, LOW); 
    // Serial.println("Motion Detected!");
    s2.write(90);
    delay(1000);
    
      
  }
  else  {
    digitalWrite(LED2, HIGH);
    // Serial.println("Motion Ended!");
    s2.write(0);
    delay(2000);
    occupied++;
    vacant--;      
    }
  

lcd.setCursor(0,0);
lcd.print("    Parking Lot");



lcd.setCursor(0,1);
lcd.print("Total slot   : 8");
lcd.setCursor(0,2);
lcd.print("vacant slot  : ");
lcd.print(vacant);
lcd.setCursor(0,3);

lcd.print("occupied slot: ");
lcd.print(occupied);




















  if (irrecv.decode(&results)){
  
        Serial.println(results.value);
        
        if(results.value==16753245){s1.write(0);digitalWrite(LED1, HIGH);delay(1000);occupied--;
   vacant++;
        }
        // else if(results.value==16736925){s1.write(90);digitalWrite(LED1, LOW);delay(1000);
        // }
        else if(results.value==16769565){s2.write(0);digitalWrite(LED2, HIGH);delay(1000);occupied++;
    vacant--;
        }
        // else if(results.value==16720605){s2.write(90);digitalWrite(LED2, LOW);delay(1000);
        // }
  
        irrecv.resume();
        
  }


}