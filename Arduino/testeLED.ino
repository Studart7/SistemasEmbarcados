int ledPin = 13; 
int ledPin2 = 12;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(300);
  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(150);
  digitalWrite(ledPin2, LOW);
}
