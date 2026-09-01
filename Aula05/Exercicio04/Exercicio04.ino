#include <Wire.h>
#include <LiquidCrystal_I2C.h>

unsigned int sensorAnalogico;
unsigned int pwm;
int click = 0;
int n1, n2, n3, n4, n5;




 LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE);

void setup() {
  Serial.begin(9600);
  lcd.begin (16,2); 
  lcd.setBacklight(HIGH); 
  pinMode(2, INPUT);

  randomSeed(analogRead(A0));
  
  

}

void loop() {
  int liga = digitalRead(2);

  Serial.println(liga); 
  


    lcd.setCursor(0,0);
    lcd.print("Numeros loteria");
      
int   sorteio = random(1, 60);

   
  
    if (liga == 0) {
      click++;
    }

   

    
      
    if (click == 1) { n1 = random(1, 60); }
    if (click == 2) { n2 = random(1, 60); }
    if (click == 3) { n3 = random(1, 60); }
    if (click == 4) { n4 = random(1, 60); }
    if (click == 5) { n5 = random(1, 60); }
    
    
    
  
 

  if (click < 6) {
  lcd.setCursor(0,1);
  if (click >= 1) { lcd.print(n1); lcd.print(" "); }
  if (click >= 2) { lcd.print(n2); lcd.print(" "); }
  if (click >= 3) { lcd.print(n3); lcd.print(" "); }
  if (click >= 4) { lcd.print(n4); lcd.print(" "); }
  if (click >= 5) { lcd.print(n5); lcd.print(" "); }  
     }
  else {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Numeros sorteados");
    lcd.setCursor(0,1);
     lcd.print(n1); lcd.print(" ");
     lcd.print(n2); lcd.print(" ");
     lcd.print(n3); lcd.print(" ");
     lcd.print(n4); lcd.print(" ");
     lcd.print(n5); lcd.print(" ");
     
    
  }
  
 
    
    
    
    
   
  
  
  

 


        
   
   
   
  
  
 
  
 delay(300);
 lcd.clear();

   
  }
