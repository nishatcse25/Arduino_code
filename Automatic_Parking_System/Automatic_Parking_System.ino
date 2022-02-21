#include <LiquidCrystal.h>
LiquidCrystal lcd(A0, A1, A2, A3, A4, A5);
#include <Servo.h>

Servo motor;

int lowerButton = 2;
int upperButton = 4;

int totalSpace = 5;
int availableSpace;

int gate1 = 0;
int gate2 = 0;

void setup() {
  pinMode(lowerButton, INPUT);
  pinMode(upperButton, INPUT);
  motor.attach(3);
  motor.write(100);
  
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print(" Car Parking ");
  lcd.setCursor(0, 1);
  lcd.print("    System   ");
  delay(2000);
  lcd.clear();
  
  availableSpace = totalSpace;

}

void loop() {
  if (digitalRead(lowerButton) == LOW && gate1 == 0){
    if (availableSpace > 0){
      gate1 = 1;
      if (gate2 == 0){
        motor.write(0);
        availableSpace = availableSpace - 1;
      }
    }
    else{
      lcd.setCursor(0, 0);
      lcd.print(" Sorry No Space ");
      lcd.setCursor(0, 1);
      lcd.print(" Available ");
      delay(1000);
      lcd.clear();
    }
  }

  if (digitalRead(upperButton) == LOW && gate2 == 0){
    gate2 = 1;
    if (gate1 = 0){
      motor.write(0);
      availableSpace = availableSpace + 1;
    }
  }

  if (gate1 == 1 && gate2 == 1){
    delay(1000);
    motor.write(100);
    gate1 = 0, gate2 = 0;
  }

  lcd.setCursor(0, 0);
  lcd.print("Total Space: ");
  lcd.print(totalSpace);

  lcd.setCursor(0, 1);
  lcd.print("Have Space:  ");
  lcd.print(availableSpace);
}
