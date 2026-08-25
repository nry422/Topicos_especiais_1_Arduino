#include <Wire.h>
#include <LiquidCrystal_I2C.h>
int i;
int j=200;



 LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE);

void setup() {
  lcd.begin (16,2); 
  lcd.setBacklight(HIGH); 

}

void loop() {
  lcd.setCursor(0,0);
  for (i=0; i <201; i++) {

    if (i < 10) {
      lcd.print("   ");
    } else if (i < 100) {
      lcd.print("  ");
    } else {
      lcd.print(" ");
    }
    
    lcd.setCursor(0,0);    
    lcd.print(i);   

     if (j < 10) {
      lcd.print("  ");
    } else if (j < 100) {
      lcd.print(" ");
    }
      
     lcd.setCursor(13,1);
    lcd.print(j);

        
    //lcd.print(j);
    delay(15);
    j--;
  }
  //lcd.print("Ola");
  
 
  //lcd.print("Mundo");
  delay(1000);

  if (i == 201 && j == -1){
     i=0;
    j=200;
    lcd.print("  ");
    lcd.setCursor(0,0); 
    lcd.print("  ");
    lcd.setCursor(13,1);   
  }



}
