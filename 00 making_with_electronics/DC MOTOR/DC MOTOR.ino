const A=8;
const B=9;

void setup(){
  Serial.begin(9600);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
}
void loop(){
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  delay(1000);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  delay(1000);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  delay(1000);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  delay(1000);

}