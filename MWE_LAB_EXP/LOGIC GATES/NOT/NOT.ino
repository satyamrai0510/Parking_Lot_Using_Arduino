int a;

void setup() {
  Serial.begin(9600);
  pinMode(4, OUTPUT);
}
void loop() {
  Serial.print("enter the value:");
  while(Serial.available()==0){}
  a=Serial.parseInt();
  
  if (!a){
    digitalWrite(4, HIGH);
    Serial.print("LED ON");
    delay(100);  
  }
  else{
    digitalWrite(4, LOW);
    delay(100);

  }
  


}
