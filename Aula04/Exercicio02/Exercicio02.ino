unsigned int sensorAnalogico;
unsigned int pwm;
int i=0;
int led[] = {10, 9, 11};

void setup() {
  Serial.begin(9600);
   pinMode(12, INPUT);

}

void loop() {
  int liga = digitalRead(12);
  sensorAnalogico = analogRead(A0);
  //Serial.println(sensorAnalogico);
  Serial.println(liga); 
  delay(100);  

  pwm = map (sensorAnalogico, 0, 1023, 0, 255);


  if(liga == 0 ){    
    led[i];    
    i++;

    if (i == 3) {
      i = 0;
    }
  }

  analogWrite(led[i], pwm);
    
  

   


}
