#include <U8g2lib.h> //引用u8g2函示庫
#include <Wire.h> //引用wire.h函示庫，以便驅動I2C
#include "1.h";
#include "2.h";
#include "3.h";
U8G2_SSD1306_128X64_NONAME_1_HW_I2C u8g2(U8G2_R0, U8X8_PIN_NONE);//硬體設定

void setup() {
u8g2.begin();
}

void loop() {
u8g2.firstPage();
do {
  u8g2.drawXBMP(0, 0, 128, 64, img1);
} while (u8g2.nextPage());
delay(500);
u8g2.firstPage();
do {
  u8g2.drawXBMP(0, 0, 128, 64, img2);
} while (u8g2.nextPage());
delay(500);
u8g2.firstPage();
do {
  u8g2.drawXBMP(0, 0, 128, 64, img3);
} while (u8g2.nextPage());
delay(500);
}
