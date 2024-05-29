#include <Keypad.h>

const byte _7SegPin = [12,14,27,26,25,33,32];
const byte ROWS = 3;
const byte COLS = 3;

char keys [ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  
};
byte rowPins[ROWS] = {32,33,25};
byte colPins[COLS] = {27,14,12};
Keypad keypad = Keypad(makeKeymap(keys),rowPins, colPins, ROWS, COLS);

void setup() {
Serial.begin(9600);
for (int i=0;i<8;i++){
  pinMode (_7SegPin[i], OUTPUT);
}
}

void loop() {
  char key = keypad.getKey();
  if (key) {
    Serial.println(key);
  }
  if (key == '1') {
    digitalWrite(12,0);
    digitalWrite(14,1);
    digitalWrite(27,1);
    digitalWrite(26,0);
    digitalWrite(25,0);
    digitalWrite(33,0);
    digitalWrite(32,0);
     
  }
  else if (key == '2'){
    digitalWrite(12,1);
    digitalWrite(14,1);
    digitalWrite(27,0);
    digitalWrite(26,1);
    digitalWrite(25,1);
    digitalWrite(33,0);
    digitalWrite(32,1);
     
  }
  else if (key == '3'){
    digitalWrite(12,1);
    digitalWrite(14,1);
    digitalWrite(27,1);
    digitalWrite(26,1);
    digitalWrite(25,0);
    digitalWrite(33,0);
    digitalWrite(32,1);
     
  }
  else if (key == '4'){
    digitalWrite(12,0);
    digitalWrite(14,1);
    digitalWrite(27,1);
    digitalWrite(26,0);
    digitalWrite(25,0);
    digitalWrite(33,1);
    digitalWrite(32,1);
     
  }
  else if (key == '5'){
    digitalWrite(12,1);
    digitalWrite(14,0);
    digitalWrite(27,1);
    digitalWrite(26,1);
    digitalWrite(25,0);
    digitalWrite(33,1);
    digitalWrite(32,1);
     
  }
  else if (key == '6'){
    digitalWrite(12,1);
    digitalWrite(14,0);
    digitalWrite(27,1);
    digitalWrite(26,1);
    digitalWrite(25,1);
    digitalWrite(33,1);
    digitalWrite(32,1);
     
  }
  else if (key == '7'){
    digitalWrite(12,1);
    digitalWrite(14,1);
    digitalWrite(27,1);
    digitalWrite(26,0);
    digitalWrite(25,0);
    digitalWrite(33,0);
    digitalWrite(32,0);
     
  }
  else if (key == '8'){
    digitalWrite(12,1);
    digitalWrite(14,1);
    digitalWrite(27,1);
    digitalWrite(26,1);
    digitalWrite(25,1);
    digitalWrite(33,1);
    digitalWrite(32,1);
     
  }
  else if (key == '9'){
    digitalWrite(12,1);
    digitalWrite(14,1);
    digitalWrite(27,1);
    digitalWrite(26,1);
    digitalWrite(25,0);
    digitalWrite(33,1);
    digitalWrite(32,1);
     
  }
}


  

