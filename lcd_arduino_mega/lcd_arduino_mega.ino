//Programa: Display LCD 16x2 e modulo I2C
//Autor: Arduino e Cia
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
//Inicializa o display no endereco 0x27
LiquidCrystal_I2C lcd(0x23,16,2);
 
void setup()
{
 lcd.init();
}
 
void loop()
{
  lcd.setBacklight(HIGH);
  lcd.setCursor(0,0);
  lcd.print("Arduino e Cia !!");
  lcd.setCursor(0,1);
  lcd.print("LCD e modulo I2C");
  delay(1000);
 
}
