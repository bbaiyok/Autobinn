void setup() {
  Serial.begin(9600);
  Serial.println("start");
  pinMode(2,INPUT);
  pinMode(13,OUTPUT);
  
}

  void loop() {
   int buttonState = digitalRead(2);
   Serial.println(buttonState);

  if (buttonState == 0) {
    digitalWrite(13,HIGH);
    Serial.println("HIGH");
   
   }
else if (buttonState == 1) {
  digitalWrite(13,LOW);
  
}

delay(200);

  }
