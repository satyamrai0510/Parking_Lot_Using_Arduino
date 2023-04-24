int A=8;
int B=9;
int count=0;
void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);

}

void loop() {
  Serial.println("Enter 0 or 1");
  while(Serial.available()==0){}
  bool D=Serial.parseInt();
  if(D==0){
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  delay(1000);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  delay(1000);
  count++;
  Serial.println("clockwise");
  Serial.print("count =");
  Serial.println(count);
  
  }
   else{

  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  delay(1000);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  delay(1000);
  count--;
  Serial.println("Anticlockwise");
  Serial.print("count =");
  Serial.println(count);
  
  }

}
