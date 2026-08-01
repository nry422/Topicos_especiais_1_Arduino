/* /define LED_PIN 12
int LED_PIN1 = 12;
int LED_PIN2 = 11;
int LED_PIN3 = 10;
int LED_PIN4 = 9;
int LED_PIN5 = 8;
int LED_PIN6 = 7;
int LED_PIN7 = 6;
int LED_PIN8 = 5; */

int ledpin[] = {12,11,10,9,8,7,6,5};
int numpin = 8;


void setup() {
  /*pinMode(LED_PIN1, OUTPUT);  //habilita o pino 12 para saida digital (outpit)
  pinMode(LED_PIN2, OUTPUT);
  pinMode(LED_PIN3, OUTPUT);
  pinMode(LED_PIN4, OUTPUT);
  pinMode(LED_PIN5, OUTPUT);
  pinMode(LED_PIN6, OUTPUT);
  pinMode(LED_PIN7, OUTPUT);
  pinMode(LED_PIN8, OUTPUT); */

  for (int i=0; i < numpin; i++) {

     pinMode(ledpin[i], OUTPUT); }


}

void loop() {

  for (int i=0; i < numpin; i++) {
    digitalWrite(ledpin[i], HIGH);
    delay(200);
    digitalWrite(ledpin[i], LOW);
    delay(200);
  }
  /*digitalWrite(LED_PIN1, HIGH);  //liga o LED
  delay(50);
  digitalWrite(LED_PIN1, LOW);  // desliga o LED
  delay(50);
  digitalWrite(LED_PIN2, HIGH);  //liga o LED
  delay(50);
  digitalWrite(LED_PIN2, LOW);  // desliga o LED
  delay(50);
  digitalWrite(LED_PIN3, HIGH);  //liga o LED
  delay(50);
  digitalWrite(LED_PIN3, LOW);  // desliga o LED
  delay(50);
  digitalWrite(LED_PIN4, HIGH);  //liga o LED
  delay(50);
  digitalWrite(LED_PIN4, LOW);  // desliga o LED
  delay(50);
  digitalWrite(LED_PIN5, HIGH);  //liga o LED
  delay(50);
  digitalWrite(LED_PIN5, LOW);  // desliga o LED
  delay(50);
  digitalWrite(LED_PIN6, HIGH);  //liga o LED
  delay(50);
  digitalWrite(LED_PIN6, LOW);  // desliga o LED
  delay(50);
  digitalWrite(LED_PIN7, HIGH);  //liga o LED
  delay(50);
  digitalWrite(LED_PIN7, LOW);  // desliga o LED
  delay(50);
  digitalWrite(LED_PIN8, HIGH);  //liga o LED
  delay(50);
  digitalWrite(LED_PIN8, LOW);  // desliga o LED
  delay(50);*/
}
