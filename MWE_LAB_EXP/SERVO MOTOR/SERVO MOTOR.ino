#include <Servo.h>

Servo myservo;

int pos = 0;

void setup() {
  myservo.attach(3);
}

void loop() {
  for (pos = 18; pos <= 130; pos += 1) {
    if(pos==130){delay(1000);}
    myservo.write(pos);
    delay(5);
  }
  for (pos = 130; pos >= 18; pos -= 1) {
    myservo.write(pos);
    delay(60);
  }
}