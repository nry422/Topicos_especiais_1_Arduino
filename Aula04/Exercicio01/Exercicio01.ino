unsigned int sensorAnalogico;
unsigned int pwm;
int portaSaidaAnalogica = 10;
void setup() {
  Serial.begin(9600);

}

void loop() {
  sensorAnalogico = analogRead(A0);
  Serial.println(sensorAnalogico); 
  delay(500);

  pwm = map (sensorAnalogico, 0, 1023, 0, 255);

  //for (int i = 2; i<255; i++){
  //pwm = i;
  //delay(15); 
   //}

   analogWrite(portaSaidaAnalogica, pwm);


}
