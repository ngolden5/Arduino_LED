void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);  //1, GREEN
  pinMode(12, OUTPUT);  //1, BLUE
  pinMode(11, OUTPUT);  //1, RED
  pinMode(10, OUTPUT);  //2, GREEN
  pinMode(9, OUTPUT);   //2, BLUE
  pinMode(8, OUTPUT);   //2, RED
  pinMode(7, OUTPUT);   //3, GREEN
  pinMode(6, OUTPUT);   //3, BLUE
  pinMode(5, OUTPUT);   //3, RED
  pinMode(4, OUTPUT);   //4, GREEN
  pinMode(3, OUTPUT);   //4, BLUE
  pinMode(2, OUTPUT);   //4, RED
}

// the loop function runs over and over again forever
void loop() 
{
   digitalWrite(13, LOW);
   digitalWrite(12, LOW);
   digitalWrite(11, LOW);
   digitalWrite(10, LOW);
   digitalWrite(9, LOW);
   digitalWrite(8, LOW);
   digitalWrite(7, LOW);
   digitalWrite(6, LOW);
   digitalWrite(5, LOW);
   digitalWrite(4, LOW);
   digitalWrite(3, LOW);
   digitalWrite(2, LOW);
   delay(1000);
   digitalWrite(13, HIGH);
   delay(5000);
   digitalWrite(12, HIGH);
   delay(5000);
   digitalWrite(11, HIGH);
   delay(5000);
   digitalWrite(10, HIGH);
   delay(5000);
   digitalWrite(9, HIGH);
   delay(5000);
   digitalWrite(8, HIGH);
   delay(5000);
   digitalWrite(7, HIGH);
   delay(5000);
   digitalWrite(6, HIGH);
   delay(5000);
   digitalWrite(5, HIGH);
   delay(5000);
   digitalWrite(4, HIGH);
   delay(5000);
   digitalWrite(3, HIGH);
   delay(5000);
   digitalWrite(2, HIGH);
   delay(5000);
}
