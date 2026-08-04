int leds[] = {13, 12, 11, 10, 9, 8};
void setup() {
  
  for (int i=0; i <6; i++){
    pinMode(leds[i], OUTPUT);
  }



  pinMode(6, INPUT);
  pinMode(7, INPUT);
}

void loop() {

  int liga = digitalRead(6);
  int ligadois = digitalRead(7);

  if (liga == 0 && ligadois == 1) {


    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
  } else {

    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  }

  if (liga == 0 || ligadois == 1) {

    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);

  } else {
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
  }


  if (liga == 0 && ligadois != 1) {

    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);



  } else {

    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
  }
}
