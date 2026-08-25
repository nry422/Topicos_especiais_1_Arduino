#include <Wire.h>
#include <LiquidCrystal_I2C.h>
int i;
int j=200;
unsigned int sensorAnalogico;
unsigned int pwm;



 LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE);

void setup() {
  Serial.begin(9600);
  lcd.begin (16,2); 
  lcd.setBacklight(HIGH); 

}

void loop() {
  sensorAnalogico = analogRead(A3);
  lcd.setCursor(0,0);
  Serial.println(sensorAnalogico);

  pwm = map (sensorAnalogico, 0, 1023, 0, 5);
  
    
    lcd.setCursor(0,0);    
    lcd.print(sensorAnalogico);   

    
      
     lcd.setCursor(0,1);
    lcd.print(pwm);

        
   
   
   
  
  
 
  
 delay(100);
 lcd.clear();

   
  }
