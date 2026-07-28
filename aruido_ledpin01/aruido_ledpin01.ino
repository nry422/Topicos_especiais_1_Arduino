//define LED_PIN 12
int LED_PIN = 12; 


void setup() {
  pinMode (LED_PIN, OUTPUT); //habilita o pino 12 para saida digital (outpit)
  

}

void loop() {
  digitalWrite (LED_PIN, HIGH); //liga o LED
  delay (30); 
  digitalWrite (LED_PIN, LOW); // desliga o LED
  delay (30); 

}
