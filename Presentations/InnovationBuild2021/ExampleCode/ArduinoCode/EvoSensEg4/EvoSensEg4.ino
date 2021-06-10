/* Using the LCD screen on EvoSens Board
 * By Duleepa J Thrimawithana
 * Revision 1.0
 * 07 June 2021 
 */

//Include the LCD library so we can reuse code written for this
#include <LiquidCrystal.h>

//Initialize by telling which pins the screen is connected to
LiquidCrystal lcd(4, 5, 6, 7, 11, 12);

void setup() {
  //Setup LCD screen
  lcd.begin(16, 2);
  
  //Print "Initialising" to LCD - 1st line
  lcd.setCursor(0,0);
  lcd.print("Initialising");

  //Print "System..." to LCD - 2nd line
  lcd.setCursor(0,1);
  lcd.print("System...");

  //Delay for 2s
  delay(2000);

  //Clear the display
  lcd.clear();
}

void loop() {
  // Read voltage on A0 and convert to actual voltage
  float Voltage = (14.0*5)*analogRead(A0)/1024;

  //Showing the battery voltage on LCD
  lcd.setCursor(0,0);
  lcd.print("Vol=");
  lcd.setCursor(4,0);
  lcd.print(Voltage);

  // Re-do the above operations every 1000 ms
  delay(1000);
}
