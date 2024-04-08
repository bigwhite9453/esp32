#define SCREEN_WIDTH 128 // 設定OLED螢幕的寬度像素
#define SCREEN_HEIGHT 64 // 設定OLED螢幕的寬度像素
#define OLED_RESET -1 // Reset pin,如果OLED上沒有RESET腳位,將它設置為-1
#define SCREEN_ADDRESS 0x3C ///< Seedatasheet for Address; 0x3D for 128x64, 0x3Cfor 128x32
Adafruit_SSD1306 display(SCREEN_WIDTH,SCREEN_HEIGHT, &Wire, OLED_RESET);
void setup() {
if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3c))
{ // 設定位址為0x3c
Serial.println(F("SSD1306 allocation
failed")); //F(字串):將字串儲存在flash並非在RAM
OLEDStatus = false; //開啟OLED失敗
}
if (OLEDStatus == true)
testdrawchar(); // Draw characters of the default font
}

void testdrawchar(void) {
display.clearDisplay(); //清除螢幕
display.setTextSize(1); //設定文字尺寸為1,1:6x8, 2:12x16, 3:18x24...etc
display.setCursor(0, 0); // 設定起始點位置(0,0)
display.setTextColor(BLACK, WHITE); //黑字白底
display.println("Hello"); //將"Hello"存入RAM
display.display(); //顯示所設定文字
//delay(2000); //延遲2秒
