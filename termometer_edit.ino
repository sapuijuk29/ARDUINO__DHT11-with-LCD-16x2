#include <Wire.h>  
#include <LiquidCrystal_I2C.h>
#include <DHT.h> 
 
LiquidCrystal_I2C lcd(0x27, 16, 2);  
DHT dht(7,DHT11);

void setup(){
   lcd.init();  
   lcd.backlight();
   delay(1000); 
}

void loop(){
  dht.read(7);  
  lcd.clear();
  lcd.print("Temp : ");
  lcd.print(dht.readTemperature());
  lcd.print(" C");
  lcd.setCursor(0,1);
  lcd.print("Humid : ");
  lcd.print(dht.readHumidity());
  lcd.print(" %");
  
delay(1000);
}
