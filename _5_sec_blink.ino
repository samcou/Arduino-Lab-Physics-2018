int led = 13; //defining 'led' as pin 13
void setup() { // Begin setup
  pinMode(led, OUTPUT); //setting pin 13 to output
}
void loop() { // Begin Loop
  digitalWrite(led, HIGH); //LED turns on
  delay(1000); //1 second delay
  for (int i=0; i<5; i++) { //Light blinks for 5 rounds then continues
    digitalWrite (led, HIGH);
    delay (250);
    digitalWrite (led, LOW);
    delay (250);
  }
  digitalWrite(led, LOW);
  delay(1000);
}
