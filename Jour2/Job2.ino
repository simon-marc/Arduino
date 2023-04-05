#include <LiquidCrystal.h>

void setup () {
    lcd.begin(15,3);
}

void loop() {
tension = analogRead(AO) * (5/1023);
lcd.print('Tension = ');
lcd.print(tension);
delay(500);


}