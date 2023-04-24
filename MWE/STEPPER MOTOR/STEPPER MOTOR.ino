int IN1=8;
int IN2=9;
int IN3=10;
int IN4=11;

void clock_wise(void);
void anticlock_wise(void);
int i;

void setup(){
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  while(1)
  {
    for(i=0;i<=10000;i++)
    {
      clock_wise();
      delay(100);
    }
    for(i=0;i<=10000;i++)
    {
      anticlock_wise();
      delay(100);
    }
  }
}

void clock_wise(void)
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  delay(100);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(100);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(100);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(100);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delay(100);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delay(100);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH);
  delay(100);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  delay(100);
  Serial.print("ON");
}

void anticlock_wise(void)
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  delay(100);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH);
  delay(100);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delay(100);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delay(100);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(100);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(100);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(100);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  delay(100);
  Serial.print("OFF");
}


// int A=8;
// int B=9;
// int C=10;
// int D=11;

// void setup(){
//   pinMOde(A,OUTPUT);
//   pinMOde(B,OUTPUT);
//   pinMOde(C,OUTPUT);
//   pinMOde(D,OUTPUT);
// }

// void loop(){
//   digitalWrite(A, HIGH);
//   digitalWrite(B, HIGH);
//   digitalWrite(C, LOW);
//   digitalWrite(D, LOW);
//   delay(10);

//   digitalWrite(A, LOW);
//   digitalWrite(B, HIGH);
//   digitalWrite(C, HIGH);
//   digitalWrite(D, LOW);
//   delay(10);

//   digitalWrite(A, LOW);
//   digitalWrite(B, LOW);
//   digitalWrite(C, HIGH);
//   digitalWrite(D, HIGH);
//   delay(10);

//   digitalWrite(A, HIGH);
//   digitalWrite(B, LOW);
//   digitalWrite(C, LOW);
//   digitalWrite(D, HIGH);
//   delay(10);
// }