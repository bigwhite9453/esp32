const byte channel = 0;
const byte input1 = 34, input2 = 35;
void setup() {
ledcSetup(channel, 10000, 8);
ledcAttachPin(25, channel);
pinMode(input1, INPUT);
pinMode(input2, INPUT);

}

void loop() {
if (digitalRead(input1) == false){
  ledcWriteTone(channel, 800);
  delay(50);
  ledcWriteTone(channel, 0);
}
else if (digitalRead(input2) == false){
  ledcWriteTone(channel, 700);
  delay(100);
  ledcWriteTone(channel, 0);
  delay(1000);
  ledcWriteTone(channel, 900);
  delay(100);
  ledcWriteTone(channel, 0);
  delay(1000);
  }
  ledcWriteTone(channel,0);
}
