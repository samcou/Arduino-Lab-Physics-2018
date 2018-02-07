int pin = 13; //defining pin as pin 13
void setup() { // Begin setup
  pinMode(pin, OUTPUT); //setting pin 13 to output
}
void loop() { // Begin Loop
  digitalWrite(pin, HIGH); //LED turns on
  delay(1000); //1 second delay
  for (int i=0; i<5; i++) { //Light blinks for 5 rounds then continues
    digitalWrite (pin, HIGH);
    delay (250);
    digitalWrite (pin, LOW);
    delay (250);
  }
  digitalWrite(pin, LOW);
  delay(1000);
}
