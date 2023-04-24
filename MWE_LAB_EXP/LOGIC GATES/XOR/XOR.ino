int a;
int b;

void setup() {
  Serial.begin(9600);
  pinMode(4, OUTPUT);

}
void loop() {
  Serial.print("Enter 1st value:");
  while(Serial.available()==0){}
  a=Serial.parseInt();

  Serial.print("Enter 2nd value:");
  while(Serial.available()==0){}
  b=Serial.parseInt();
  
  if( ((!a&&b)||(a&&!b)) ){
    digitalWrite(4, HIGH);
    Serial.println("LED ON");
    delay(100);  
  }
  else{
    digitalWrite(4, LOW);
    Serial.println("LED Off");
    delay(100);

  }
}
