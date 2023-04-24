void setup() {
Serial.begin(9600);
pinMode(4,OUTPUT);
  

}

void loop() {
  Serial.println("Enter 1st input ");
  while(Serial.available()==0){}
  int M=Serial.parseInt();
  Serial.println("Enter 2nd input ");
  while(Serial.available()==0){}
  int N=Serial.parseInt();
  Serial.print("you have entered");
  Serial.print(" ");
  Serial.print(M);
  Serial.print(" and ");
  Serial.println(N);
  Serial.println("Enter operations(1,2,3,4)");
  Serial.println("1-AND");
  Serial.println("2-OR");
  Serial.println("3-NOR");
  Serial.println("4-NAND");
  while(Serial.available()==0){}
  int I=Serial.parseInt();

 if(I==1){
 int A=M&&N;
 Serial.print("AND gate output is ");
 Serial.println(A);
 if(A==1){
 digitalWrite(4,HIGH);}
 if(A==0){
 digitalWrite(4,LOW);}
 
 }
 if(I==2){
 int B=M||N;
 Serial.print("OR gate output is ");
 Serial.println(B);
 if(B==1){
 digitalWrite(4,HIGH);}
 if(B==0){
 digitalWrite(4,LOW);}
 
 }
 if(I==3){
 int C=!(M||N);
 Serial.print("NOR gate output is ");
 Serial.println(C);
 if(C==1){
 digitalWrite(4,HIGH);}
 if(C==0){
 digitalWrite(4,LOW);}
 
 }
 if(I==4){
 int D=!(M&&N);
 Serial.print("NAND gate output is");
 Serial.println(D);
 if(D==1){
 digitalWrite(4,HIGH);}
 if(D==0){
 digitalWrite(4,LOW);}
 }
}
