void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);



  pinMode(6, INPUT);
  pinMode(7, INPUT);


}

void loop() {

  int liga = digitalRead(6);
  if (liga == 0) {


    digitalWrite(11, HIGH);

  }

  int ligadois = digitalRead(7);
  if (ligadois == 1) {


    digitalWrite(10, HIGH);

  }





}
