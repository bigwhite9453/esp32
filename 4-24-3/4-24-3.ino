#include <U8g2lib.h> //引用u8g2函示庫
#include <Wire.h> //引用wire.h函示庫，以便驅動I2C
U8G2_SSD1306_128X64_NONAME_1_HW_I2C u8g2(U8G2_R0, U8X8_PIN_NONE);//硬體設定
void setup() {
  u8g2.begin();
  u8g2.enableUTF8Print();//啟用UTF8文字功能，便可顯示雙位元組的字元(含中文)
}
void loop () {
  u8g2.setFont(u8g2_font_unifont_t_chinese1);
  u8g2.firstPage();
  do {
    u8g2.setCursor(0, 22);
    u8g2.print("唐梓修");
  } while(u8g2.nextPage());
}