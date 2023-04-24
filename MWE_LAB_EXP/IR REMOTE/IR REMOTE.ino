#include <IRremote.h>
 
// Define sensor pin
const int RECV_PIN = 2;
 
// Define IR Receiver and Results Objects
IRrecv irrecv(RECV_PIN);
decode_results results;
 
 
void setup(){
  // Serial Monitor @ 9600 baud
  Serial.begin(9600);
  pinMode(5, OUTPUT);
  irrecv.enableIRIn();
}
 
void loop(){
  if (irrecv.decode(&results)){
  
        Serial.println(results.value);
        delay(1000);
        if(results.value==16753245){digitalWrite(5, HIGH);}
        else if(results.value==16736925){digitalWrite(5, LOW);
        }
        irrecv.resume();
        
  }
}
