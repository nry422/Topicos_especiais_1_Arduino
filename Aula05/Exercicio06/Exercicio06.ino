#include <Wire.h>
#include <LiquidCrystal_I2C.h>

unsigned int sensorAnalogico;
unsigned int pwm;
int click;
int n1 = 99, n2;
int tentativa = 0;
int acertou = 0;






LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup() {
  Serial.begin(9600);
  lcd.begin (16, 2);
  lcd.setBacklight(HIGH);
  pinMode(2, INPUT);
  pinMode(3, INPUT);

  randomSeed(analogRead(A0));





}

void loop() {

  int liga = digitalRead(2);
  int increase = digitalRead(3);

  Serial.println(liga);

  if (acertou == 1) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("acertou!");
  }

  lcd.setCursor(0, 0);
  lcd.print("adivinhe");


  if (tentativa == 0) {

    if (liga == 0) {
      n1 = random(1, 60);
      tentativa++;
    }

  }

  if (tentativa > 0) {
    if (liga == 0) {
      if (n1 == n2) {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("ACERTOU");
        lcd.setCursor(1, 1);
        lcd.print(n1);
        delay(2000);
        lcd.setCursor(0, 1);
        lcd.print("press to reset");

        while (digitalRead(2) == HIGH && digitalRead(3) == HIGH) {

        }
        click = 0;
        tentativa = 0;
        acertou = 0;
        n2 = 0;
        n1 = 99;
        lcd.clear();
        delay(300);

      } else {
        tentativa++;
      }

      if (tentativa == 10) {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("FAIL");
        delay(2000);
        lcd.setCursor(0, 1);
        lcd.print("press to reset");
        while (digitalRead(2) == HIGH && digitalRead(3) == HIGH) {

        }
        click = 0;
        tentativa = 0;
        acertou = 0;
        n2 = 0;
        n1 = 99;
        lcd.clear();
        delay(300);



      }
    }

    if (increase == 0) {
      click++;
    }

    n2 = click;



    lcd.setCursor(13, 0);
    lcd.print(n1); lcd.print(" ");

    lcd.setCursor(0, 1);
    lcd.print(n2); lcd.print(" ");



  }
























  delay(150);
  lcd.clear();


}
