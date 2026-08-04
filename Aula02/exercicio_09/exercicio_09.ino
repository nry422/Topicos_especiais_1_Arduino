void setup() {
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
 



  pinMode(12, INPUT);
  pinMode(10, INPUT);
  pinMode(8, INPUT);
  pinMode(6, INPUT);


}

void loop() {

  int s1 = digitalRead(12);
  int s2 = digitalRead(10);
  int s3 = digitalRead(8);
  int s4 = digitalRead(6);

  digitalWrite(11, HIGH);  
  
  
  digitalWrite(11, LOW);

  if (s1 == 1) {

    digitalWrite(13, HIGH);
    
  } 

   if (s2 == 1) {

    digitalWrite(11, HIGH);
    
  } 

   if (s3 == 1) {

    digitalWrite(9, HIGH);
    
  } 

   if (s4 == 1) {

    digitalWrite(7, HIGH);
    
  } 


  }
