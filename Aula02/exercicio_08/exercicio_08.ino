void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
   pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);



  pinMode(6, INPUT);
  pinMode(7, INPUT);


}

void loop() {

  int liga = digitalRead(6);
  int ligadois = digitalRead(7);

  if (liga == 0 && ligadois == 1) {


    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW); 
    }else if (liga == 0 || ligadois == 1) {

    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);

    } else  if (liga == 0 && ligadois != 1 ) {

    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    
    
  

    }  else {

    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);






  }





}
