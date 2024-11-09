#define spin A0
void setup() {
  Serial.begin(9600);

}

void loop() {
 int tempdata = analogRead(spin);
 float volt = tempdata*(5);
 float volt1 = volt/1024;
 float temp = volt1*100;
 Serial.println("Temperature = ");
 Serial.println(temp);
 delay(3000);

}
