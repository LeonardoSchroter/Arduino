#include <LiquidCrystal.h>
#define luz_fundo 7

LiquidCrystal lcd(12,11,5,4,3,2);
void setup() {
  lcd.begin(16,2);
  pinMode(luz_fundo,OUTPUT);
  digitalWrite(luz_fundo,HIGH);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,0);
  lcd.print("Arduino");
  lcd.setCursor(0,1);
  lcd.print("intermediario ");

  //lcd.print(millis()/1000);
}
