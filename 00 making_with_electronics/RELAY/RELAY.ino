int Relay=2;
void setup(){
Serial.begin(9600);
pinMode(Relay, OUTPUT);
}
void loop(){
digitalWrite(Relay, HIGH);
delay(5000);
digitalWrite(Relay, LOW);
delay(5000);
}
