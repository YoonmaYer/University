void setup(){
  pinMode(4,OUTPUT);
  Serial.begin(9600);
}

void loop(){

  int a = analogRead(A0);

  delay(200);

  if
    (a>300){
      digitalWrite(4,LOW);
    }
  else{
  digitalWrite(4,HIGH);
  }
  Serial.println(a);
}