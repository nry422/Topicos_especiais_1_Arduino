//define LED_PIN 12
/*int LED_PIN1 = 12;
int LED_PIN2 = 11;
int LED_PIN3 = 10;
int LED_PIN4 = 9;
int LED_PIN5 = 8;
int LED_PIN6 = 7;
int LED_PIN7 = 6;
int LED_PIN8 = 5;*/

int pins[] = {12, 11, 10, 9, 8, 7, 6, 5};
int numpin = 8;


void setup() {

  int numpin = 8;

  for (int i=0; i < numpin; i++) {

     pinMode(12-i, OUTPUT);

  }

  /*pinMode(12, OUTPUT);  //habilita o pino 12 para saida digital (outpit)
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT); */
}

void loop() {

   for (int i = 0; i < 4; i++) { //já que ativamos em pares 4 é a metade do total de pinos
    digitalWrite(pins[i], HIGH);
    digitalWrite(pins[numpin - 1 - i], HIGH);
    delay(1000);
    digitalWrite(pins[i], LOW);
    digitalWrite(pins[numpin - 1 - i], LOW);
  }

   for (int i = 2; i >= 0; i--) { // i é 2 pq o final do anterior é 3 (<4) e para não repetir o 3 uso 2
    digitalWrite(pins[i], HIGH);
    digitalWrite(pins[numpin - 1 - i], HIGH);
    delay(1000);
    digitalWrite(pins[i], LOW);
    digitalWrite(pins[numpin - 1 - i], LOW);
  }

  delay(1000); 

  /* digitalWrite(LED_PIN1, HIGH);
  digitalWrite(LED_PIN8, HIGH);
  delay(1000);

  digitalWrite(LED_PIN1, LOW);
  digitalWrite(LED_PIN8, LOW);
  digitalWrite(LED_PIN2, HIGH);
  digitalWrite(LED_PIN7, HIGH);
  delay(1000);

  digitalWrite(LED_PIN2, LOW);
  digitalWrite(LED_PIN7, LOW);
  digitalWrite(LED_PIN3, HIGH);
  digitalWrite(LED_PIN6, HIGH);
  delay(1000);

  digitalWrite(LED_PIN3, LOW);
  digitalWrite(LED_PIN6, LOW);
  digitalWrite(LED_PIN4, HIGH);
  digitalWrite(LED_PIN5, HIGH);
  delay(1000);


  digitalWrite(LED_PIN4, LOW);
  digitalWrite(LED_PIN5, LOW);
  digitalWrite(LED_PIN3, HIGH);
  digitalWrite(LED_PIN6, HIGH);
  delay(1000);

  digitalWrite(LED_PIN3, LOW);
  digitalWrite(LED_PIN6, LOW);
  digitalWrite(LED_PIN2, HIGH);
  digitalWrite(LED_PIN7, HIGH);
  delay(1000);

  digitalWrite(LED_PIN2, LOW);
  digitalWrite(LED_PIN7, LOW);
  digitalWrite(LED_PIN1, HIGH);
  digitalWrite(LED_PIN8, HIGH);
  delay(1000);

  digitalWrite(LED_PIN1, LOW);
  digitalWrite(LED_PIN8, LOW);
  delay(1000); */

}
