void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);


  pinMode(6, INPUT);


}

void loop() {

  int liga = digitalRead(6);
  if (liga == 0) {
    
    delay(200);

    digitalWrite(9, LOW);  // desliga verde sinal

    digitalWrite(10, HIGH);  // amarelo sinal1
    delay(1000);
    digitalWrite(10, LOW);

    digitalWrite(11, HIGH);  // vermelho sinal
    delay(3000);
    digitalWrite(11, LOW);  // vermelho sinal

    
    
  } else {
    digitalWrite(9, HIGH);  // verde sinal
    
  }



}
