const byte channel = 0;//選定PWM通道0
void setup() {

ledcSetup(channel, 10000, 8);
ledcAttachPin(25, channel);//接於25接角


}

void loop() {
for (int i = 1; i <= 13; i++){
  ledcWriteTone(channel, 700);//於通道0發聲，頻率700
  delay(500);
  ledcWriteTone(channel, 900);//於通道0發聲，頻率900
  delay(500);
}
ledWriteTone(channel,700);
  delay(1000);
}
