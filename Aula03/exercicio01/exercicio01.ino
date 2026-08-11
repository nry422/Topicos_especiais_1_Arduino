unsigned int sensor;
void setup() {
  Serial.begin(9600);//Inicia a comunica¸c~ao pela porta serial
  pinMode(10, OUTPUT);
}

void loop() {
  sensor = analogRead(A5);  
  Serial.println(sensor); //Imprime na serial o valor da variavel  sensor
  delay(1000);

  if ( sensor > 1000) {
    digitalWrite(10, HIGH);
  } else {
    digitalWrite(10, LOW);
  }

}
