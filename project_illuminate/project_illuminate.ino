#include <Servo.h>
#include <IRremote.h>
int IRSensor1 = 3;
int IRSensor2 = 4;
int LED1 = 8; 
int LED2 = 9;
Servo s1;
Servo s2;
const int RECV_PIN = 2;
IRrecv irrecv(RECV_PIN);
decode_results results;

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
    }

  if (irrecv.decode(&results)){
  
        Serial.println(results.value);
        
        if(results.value==16753245){s1.write(0);digitalWrite(LED1, HIGH);delay(1000);
        }
        else if(results.value==16736925){s1.write(90);digitalWrite(LED1, LOW);delay(1000);
        }
        else if(results.value==16769565){s2.write(0);digitalWrite(LED2, HIGH);delay(1000);
        }
        else if(results.value==16720605){s2.write(90);digitalWrite(LED2, LOW);delay(1000);
        }
        irrecv.resume(); 
  }
}