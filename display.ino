#include <Wire.h>     // I2C-Bus
#include "U8g2lib.h"  // OLED-Display

U8G2 display = U8G2_SSD1306_128X64_NONAME_1_HW_I2C(U8G2_R0);

void display_init()
{
  //oled.setI2CAddress(0x3C);
  display.begin();
}

void reset_display() {
  // ...
  display.firstPage();
  do {
    display.setFont(u8g2_font_6x12_tr);
    display.drawStr(0, 12, "Amateur Radio OE1XMW");  // Zeile 1, gelb
    display.drawStr(0, 24, "Date: 2024-12-14");      // Zeile 2
    display.drawStr(0, 36, "Time: --:--");           // Zeile 3
    display.drawStr(0, 48, "your ibutton please");   // Zeile 4
    display.drawStr(0, 60, "access denied");         // Zeile 5
    //  oled.drawStr(0,60,"access allowed");
  } while (display.nextPage());
}
