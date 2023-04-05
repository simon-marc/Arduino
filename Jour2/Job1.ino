#include <LiquidCrystal.h>

LiquidCrystal lcd(2,3,4,5,6,7,8,9)

void setup ()
{
lcd.begin(15, 3);
lcd.print("Hello World")
}

void loop() {
    
}