//define LED_PIN 12
int LED_PIN1 = 12;
int LED_PIN2 = 11;
int LED_PIN3 = 10;
int LED_PIN4 = 9;
int LED_PIN5 = 8;
int LED_PIN6 = 7;
int LED_PIN7 = 6;
int LED_PIN8 = 5;


void setup() {
  pinMode(LED_PIN1, OUTPUT);  //habilita o pino 12 para saida digital (outpit)
  pinMode(LED_PIN2, OUTPUT);
  pinMode(LED_PIN3, OUTPUT);
  pinMode(LED_PIN4, OUTPUT);
  pinMode(LED_PIN5, OUTPUT);
  pinMode(LED_PIN6, OUTPUT);
  pinMode(LED_PIN7, OUTPUT);
  pinMode(LED_PIN8, OUTPUT);
}

void loop() {

  digitalWrite(LED_PIN1, HIGH);  // verde sinal1
  digitalWrite(LED_PIN4, HIGH);  // vermelho sinal2
  delay(3000);
  digitalWrite(LED_PIN1, LOW);  // desliga verde sinal1


  digitalWrite(LED_PIN2, HIGH);  // amarelo sinal1
  delay(1000);
  digitalWrite(LED_PIN2, LOW);
  digitalWrite(LED_PIN4, LOW);  // desliga vermelho sinal2


  digitalWrite(LED_PIN3, HIGH);  // vermelho sinal1
  digitalWrite(LED_PIN6, HIGH);  // verde sinal2
  delay(3000);
  digitalWrite(LED_PIN6, LOW);  // desliga verde sinal2

  digitalWrite(LED_PIN5, HIGH);  // amarelo sinal2
  delay(1000);
  digitalWrite(LED_PIN5, LOW);
  digitalWrite(LED_PIN3, LOW);  // desliga vermelho sinal1

}
