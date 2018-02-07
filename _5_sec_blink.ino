int pin = 13; //defining pin as pin 13
void setup() {
  pinMode(pin, OUTPUT);
}
void loop() {
  digitalWrite(pin, HIGH);
  delay(1000);
  for (int i=0; i<5; i++) {
    digitalWrite (pin, HIGH);
    delay (250);
    digitalWrite (pin, LOW);
    delay (250);
  }
  digitalWrite(pin, LOW);
  delay(1000);
}
