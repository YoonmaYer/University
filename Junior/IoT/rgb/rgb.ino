int ledPin = 8;
int ledPin2 = 4;
int ledPin3 = 2; 

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin2, HIGH);
  delay(1000);
  digitalWrite(ledPin3, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
  digitalWrite(ledPin2, LOW);
  delay(1000);
  digitalWrite(ledPin3, LOW);
  delay(1000);
}