#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define ANCHO 128
#define ALTO 64

#define OLED_RESET 4
Adafruit_SSD1306 oled(ANCHO, ALTO, &Wire, OLED_RESET);

void setup() {
  Wire.begin();
  oled.begin(SSD1306_SWITCHCAPVCC, 0x3C);
}

void loop() {
  oled.clearDisplay();
  oled.setTextColor(WHITE);
  oled.setTextSize(1);
  oled.setCursor(0,0);  
  oled.print("Primer texto que ocupa dos lineas, 16 px"); 
  oled.setCursor(0,16);  
  oled.print("Segundo texto que ocupa tres lineas mas, 32 px"); 
  oled.display();
}
