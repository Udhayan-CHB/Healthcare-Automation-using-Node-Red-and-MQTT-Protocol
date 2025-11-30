#include <Wire.h>
#include <LiquidCrystal.h>
// LCD pin connections
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
String receivedText = "";
void setup() {
  Wire.begin(8); // Arduino I2C address = 8
  Wire.onReceive(receiveEvent);
  lcd.begin(16, 2);
  lcd.print("Waiting for data");
}
void loop() {
  // nothing, all handled in interrupt
}
void receiveEvent(int howMany) {
  receivedText = "";
  while (Wire.available()) {
    char c = Wire.read();
    receivedText += c;
  }
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Heart Rate");
  lcd.setCursor(0, 1);
  lcd.print(receivedText);
  lcd.print(" bpm");
}
