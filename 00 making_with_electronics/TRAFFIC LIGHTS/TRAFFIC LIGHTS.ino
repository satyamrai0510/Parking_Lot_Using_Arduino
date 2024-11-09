int board1[] = {2, 3, 4};
int board2[] = {5, 6, 7};
int board3[] = {8, 9, 10};
int board4[] = {13, 12, 11};
int redDelay = 5000;
int yellowDelay = 2000;
void setup() {

  for (int i = 0; i < 3; i++) {
    pinMode(board1[i], OUTPUT);
    pinMode(board2[i], OUTPUT);
    pinMode(board3[i], OUTPUT);
    pinMode(board4[i], OUTPUT);
  }

}
void loop() {

  digitalWrite(board1[2], HIGH);
  digitalWrite(board1[0], LOW);
  digitalWrite(board2[0], HIGH);
  digitalWrite(board3[0], HIGH);
  digitalWrite(board4[0], HIGH);
  delay(redDelay);


  digitalWrite(board1[1], HIGH);
  digitalWrite(board1[2], LOW);
  delay(yellowDelay);
  digitalWrite(board1[1], LOW);
 


  digitalWrite(board1[0], HIGH);
  digitalWrite(board2[2], HIGH);
  digitalWrite(board2[0], LOW);
  digitalWrite(board3[0], HIGH);
  digitalWrite(board4[0], HIGH);
  delay(redDelay);
 


  digitalWrite(board2[1], HIGH);
  digitalWrite(board2[2], LOW);
  delay(yellowDelay);
  digitalWrite(board2[1], LOW);



  digitalWrite(board1[0], HIGH);
  digitalWrite(board2[0], HIGH);
  digitalWrite(board3[2], HIGH);
  digitalWrite(board3[0], LOW);
  digitalWrite(board4[0], HIGH);
  delay(redDelay);
  


  digitalWrite(board3[1], HIGH);
  digitalWrite(board3[2], LOW);
  delay(yellowDelay);
  digitalWrite(board3[1], LOW);
  


  digitalWrite(board1[0], HIGH);
  digitalWrite(board2[0], HIGH);
  digitalWrite(board3[0], HIGH);
  digitalWrite(board4[2], HIGH);
  digitalWrite(board4[0], LOW);
  delay(redDelay);
  


  digitalWrite(board4[1], HIGH);
  digitalWrite(board4[2], LOW);
  delay(yellowDelay);
  digitalWrite(board4[1], LOW);
}