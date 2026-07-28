
int LED_PIN = 12, i=0; 


void setup() {
  pinMode (LED_PIN, OUTPUT); 
  

}

void loop() {

  for (i=0; i < 3; i++) {
  digitalWrite (LED_PIN, HIGH); 
  delay (1000); 
  digitalWrite (LED_PIN, LOW); 
  delay (3000); 
  
  }

  for (i=0;i<5; i++) {
  digitalWrite (LED_PIN, HIGH); 
  delay (200); 
  digitalWrite (LED_PIN, LOW); 
  delay (200); 
  }

delay (3000);
}
