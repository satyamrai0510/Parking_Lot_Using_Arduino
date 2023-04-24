int a;
int b;

void setup() {
  Serial.begin(9600);
  pinMode(4, OUTPUT);
}
void loop() {
  Serial.print("enter 1st value:");
  while(Serial.available()==0){}
  a=Serial.parseInt();
  Serial.print("enter 2nd value:");
  while(Serial.available()==0){}
  b=Serial.parseInt();
  
  if (!(a&&b))
  {
    digitalWrite(4, HIGH);
    Serial.print("LED ON");
    delay(100);  
  }
  else{
    digitalWrite(4, LOW);
    delay(100);

  }
  


}
