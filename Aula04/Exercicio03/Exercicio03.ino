unsigned int sensorAnalogico;
unsigned int pwm;
int i=0;
int led[] = {10};

void setup() {
  Serial.begin(9600);
   pinMode(12, INPUT);

}

void loop() {
  int liga = digitalRead(12);
  sensorAnalogico = analogRead(A5);
  Serial.println(sensorAnalogico);
  //Serial.println(liga); 
  delay(100);  

  pwm = map (sensorAnalogico, 400, 1023, 0, 255);


  

  analogWrite(led[i], pwm);
    
  

   


}
