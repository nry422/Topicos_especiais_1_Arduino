#include <Wire.h>
#include <LiquidCrystal_I2C.h>

unsigned int sensorAnalogico;
unsigned int pwm;
int click = 0;
int n1;




 LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE);

void setup() {
  Serial.begin(9600);
  lcd.begin (16,2); 
  lcd.setBacklight(HIGH); 
  pinMode(2, INPUT);

 
  
  

}

void loop() {
  int liga = digitalRead(2);

  Serial.println(liga); 
  


    lcd.setCursor(0,0);
    lcd.print("CONTA CLICKS");
      


   
  
    if (liga == 0) {
      click++;
    }
    
    
  n1 = click;
 

  
  lcd.setCursor(0,1);
  lcd.print(n1); lcd.print(" "); 
   
    
     
    

  
 
    
    
    
    
   
  
  
  

 


        
   
   
   
  
  
 
  
 delay(150);
 lcd.clear();

   
  }
