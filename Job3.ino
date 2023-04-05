#include <LiquidCrystal.h>


LiquidCrystal lcd(2,3,4,5,11,12)

byte draw[] = {
  B01110,
  B10101,
  B11011,
  B01110,
  B01110,
  B00000,
  B00000
};

void setup(){
lcd.begin(15,3);
lcd.createChar(0,draw);
}

void loop(){
lcd.setCursor(0,1);
lcd.write(byte(0));
lcd.clear
}