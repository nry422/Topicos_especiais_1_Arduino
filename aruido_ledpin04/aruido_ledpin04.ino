
int LED_PIN1 = 12;
int LED_PIN2 = 11;
int LED_PIN3 = 10;


void setup() {
  pinMode(LED_PIN1, OUTPUT);  //habilita o pino 12 para saida digital (outpit)
  pinMode(LED_PIN2, OUTPUT);
  pinMode(LED_PIN3, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN1, HIGH);  //liga o LED
  delay(500);
  digitalWrite(LED_PIN2, HIGH);  //liga o LED
  delay(500);
  digitalWrite(LED_PIN3, HIGH);  //liga o LED
  delay(500);
  digitalWrite(LED_PIN3, LOW);  // desliga o LED
  delay(500);
  digitalWrite(LED_PIN2, LOW);  // desliga o LED
  delay(500);
  digitalWrite(LED_PIN1, LOW);  // desliga o LED
  delay(500);
}
