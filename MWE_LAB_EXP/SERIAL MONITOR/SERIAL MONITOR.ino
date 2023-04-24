String n;
String r;
String g;
String b;

void setup() {
  Serial.begin(9600);
}
void loop() {
  Serial.println("Enter Your Name:");
  while (Serial.available() == 0) {}
  n=Serial.readString();

  Serial.println("Enter Your Roll No.:");
  while (Serial.available() == 0) {}
  r=Serial.readString();

  Serial.println("Enter Your Gender:");
  while (Serial.available() == 0) {}
  g=Serial.readString();

  Serial.println("Enter Your Branch:");
  while (Serial.available() == 0) {}  
  b=Serial.readString();

  Serial.print("your name is:");
  Serial.println(n);
  Serial.print("your roll no. is:");
  Serial.println(r);
  Serial.print("your gender is:");
  Serial.println(g);
  Serial.print("your branch is:");
  Serial.println(b);

  if(g=="male"){
    Serial.print("welcome Mr.");
    Serial.println(n);
    Serial.println("to cmru");
  }
  else{
    Serial.print("welcome Ms.");
    Serial.println(n);
    Serial.println("to cmru");
  }
  if(b=="cse"){
   Serial.print("Your branch is:");
   Serial.println(b);
   Serial.println("go to room no. 403"); 
  }
  if(b=="ece"){
   Serial.print("Your branch is:");
   Serial.println(b);
   Serial.println("go to room no. 402");
  }
  else{
   Serial.println("contact administrator");

  }

 
}