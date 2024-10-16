/* This misc sketch demonstrates a different way
 * to utilize the display. This appears to work
 * just fine, too.
 */

#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_RESET 4

Adafruit_SSD1306 display(OLED_RESET);

void display_demo()
{
  // generate the high voltage from the 3.3v line internally
  // initialize with the I2C addr 0x3C (for the 128x64)
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);

  // Show image buffer on the display.
  // Since the buffer is intialized with an Adafruit splashscreen
  // internally, this will display that splashscreen.
  display.display();
  delay(5000);

  // Clear the buffer.
  display.clearDisplay();

  display.setTextColor(WHITE);
  /* the above has no effect,
   * each pixel has its fixed color:
   * yellow in the "upper part" and
   * cyan (or whatever color this is)
   * in the "lower part".
   */
  
  display.setTextSize(1);
  display.setCursor(0, 0);
  display.println("Hello,world!");
  display.println("Hello,keyestudio!");
  display.setTextSize(2);
  display.println("Hello!");
  display.println("keyes!");
  display.println("keyestudio");
  display.display();
  delay(250);
}
