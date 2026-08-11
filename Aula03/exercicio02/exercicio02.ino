unsigned int sensor;
void setup() {
  Serial.begin(9600);//Inicia a comunica¸c~ao pela porta serial
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  sensor = analogRead(A5);
  Serial.println(sensor); //Imprime na serial o valor da variavel  sensor
  delay(1000);

  if ( sensor < 800) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);

  }

  if ( sensor < 650) {
    digitalWrite(12, HIGH);
  } else {
    digitalWrite(12, LOW);
  }

  if ( sensor < 470) {
    digitalWrite(8, HIGH);
  } else {
    digitalWrite(8, LOW);

  }

  if ( sensor < 370) {
    digitalWrite(5, HIGH);
  } else {
    digitalWrite(5, LOW);
  }

}
