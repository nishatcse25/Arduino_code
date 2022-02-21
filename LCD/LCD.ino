#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int variable=25;

void setup() {
lcd.begin(16, 2);
lcd.print("Nishat Shahrin");
lcd.print(variable,DEC);

}

void loop() { }
