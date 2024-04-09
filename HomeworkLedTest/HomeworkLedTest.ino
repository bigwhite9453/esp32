
#include <Wire.h> //引用wire.h函示庫，以便驅動I2C
#include <SPI.h>
#include <U8g2lib.h> //引用u8g2函示庫

U8G2_SSD1306_128X64_NONAME_1_HW_I2C u8g2(U8G2_R0, U8X8_PIN_NONE);//硬體設定

int 
int selected = 0;
int entered = -1;
const byte LED1 = 4;
const byte LED2 = 0;
const byte LED3 = 2;
const byte LED4 = 15;
void displaymenu(void) {

  int down = digitalRead(39);
  int up = digitalRead(35);
  int enter = digitalRead(36);
  int back = digitalRead(34);

  if (up == LOW && down == LOW) {
  };
  if (up == LOW) {
    selected = selected + 1;
    delay(200);
  };
  if (down == LOW) {
    selected = selected - 1;
    delay(200);
  };
  if (enter == LOW) {
    entered = selected;
  };
  if (back == LOW) {
    entered = -1;
  };
  const char *options[4] = {
    " LED 1",
    " LED 2",
    " LED 3",
    " LED 4 ",
  };

  if (entered == -1) {
    u8g2.firstPage();
    display.setCursor(0, 0);
    display.println(F("LED test"));
    display.println("");
    for (int i = 0; i < 4; i++) {
      if (i == selected) {
        display.setTextColor(SSD1306_BLACK, SSD1306_WHITE);
        display.println(options[i]);
      } else if (i != selected) {
        display.setTextColor(SSD1306_WHITE);
        display.println(options[i]);
      }
    }
  } else if (entered == 0) {
    digitalWrite(4, HIGH);
  } else if (entered == 1) {
    digitalWrite(0, HIGH);
  }
  else if (entered == 2) {
    digitalWrite(2, HIGH);
  } else if (entered == 3) {
    digitalWrite(15, HIGH);
  } 

  display.display();
}

void setup() {
  pinMode(34, INPUT_PULLUP);
  pinMode(35, INPUT_PULLUP);
  pinMode(36, INPUT_PULLUP);
  pinMode(39, INPUT_PULLUP);
  pinMode(4, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(15, OUTPUT);

  Serial.begin(9600);
  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;); // Don't proceed, loop forever
  }
  display.clearDisplay();
  // Draw a single pixel in white
  display.drawPixel(10, 10, SSD1306_WHITE);
  display.display();
  delay(2000); // Pause for 2 seconds
}

void loop() {
  // put your main code here, to run repeatedly:
  displaymenu();
}

