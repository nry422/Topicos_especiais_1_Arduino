#include <Wire.h>
#include <LiquidCrystal_I2C.h>

unsigned int sensorAnalogico;
unsigned int pwm;



 LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE);

void setup() {
  Serial.begin(9600);
  lcd.begin (16,2); 
  lcd.setBacklight(HIGH); 
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  

}

void loop() {
  sensorAnalogico = analogRead(A3);
  lcd.setCursor(0,0);
  Serial.println(sensorAnalogico);

  pwm = map (sensorAnalogico, 0, 1023, 0, 500);
 float  pwmf = pwm /100.0;
    
      
    

    lcd.setCursor(0,0);
    lcd.print("Vol ate 5.00");
      
     lcd.setCursor(0,1);
    lcd.print(pwmf);

    if (pwm > 200) {
      digitalWrite(8, HIGH);
    } else {
      digitalWrite(8, LOW);
    }

     if (pwm > 300) {
      digitalWrite(9, HIGH);
    } else {
      digitalWrite(9, LOW);
    }

        
   
   
   
  
  
 
  
 delay(100);
 lcd.clear();

   
  }
