#include <LCD_I2C.h>

LCD_I2C lcd(0x27, 16, 2); 

void setup()
{
    lcd.begin(); 
    lcd.backlight();
}

void loop()
{
    lcd.print("fatma"); 
    lcd.setCursor(0, 1); 
    lcd.print("sude");
    delay(500);

    // Flashing the backlight
    for (int i = 0; i < 5; ++i)
    {
        lcd.backlight();
        delay(50);
        lcd.noBacklight();
        delay(50);
    }

    lcd.backlight();
    lcd.clear();
    delay(500);
}
