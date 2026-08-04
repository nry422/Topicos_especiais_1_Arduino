int ledPins[] = {13, 11, 9, 7};
int buttonPins[] = {12, 10, 8, 6};

int sequence[100];
int currentLevel = 0;


void playSequence(void);
int checkPlayerInput(void);
void gameOver(void);

void setup() {
  int i;
  for (i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);
    pinMode(buttonPins[i], INPUT);
  }
  
  
  randomSeed(analogRead(0)); 
}

void loop() {
  sequence[currentLevel] = random(0, 4);
  currentLevel++;
  
  playSequence();
  
  
  if (checkPlayerInput() == 0) {
    gameOver();
  }
  
  delay(1000);
}



void playSequence(void) {
  int i;
  for (i = 0; i < currentLevel; i++) {
    int currentLed = sequence[i];
    digitalWrite(ledPins[currentLed], HIGH);
    delay(500);
    digitalWrite(ledPins[currentLed], LOW);
    delay(250);
  }
}

int checkPlayerInput(void) {
  int i;
  for (i = 0; i < currentLevel; i++) {
    int buttonPressed = 0; 
    int expectedButton = sequence[i];
    
    while (buttonPressed == 0) {
      int btn;
      for (btn = 0; btn < 4; btn++) {
        if (digitalRead(buttonPins[btn]) == HIGH) {
          
          digitalWrite(ledPins[btn], HIGH);
          delay(300);
          digitalWrite(ledPins[btn], LOW);
          
          
          if (btn != expectedButton) {
            return 0; 
          }
          
          buttonPressed = 1; 
          
          
          while (digitalRead(buttonPins[btn]) == HIGH) { delay(10); } 
        }
      }
    }
  }
  return 1; 
}

void gameOver(void) {
  int i, j;
  for (j = 0; j < 3; j++) {
    for (i = 0; i < 4; i++) {
      digitalWrite(ledPins[i], HIGH);
    }
    delay(300);
    for (i = 0; i < 4; i++) {
      digitalWrite(ledPins[i], LOW);
    }
    delay(300);
  }
  currentLevel = 0; 
  delay(1000);
}