const int trigPin = 17;
const int echoPin = 5;
const byte LED1 = 4;
const byte LED2 = 0;
const byte LED3 = 2;
long duration;
long cm;

void setup() {
Serial.begin(9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(4, OUTPUT);
pinMode(0, OUTPUT);
pinMode(2, OUTPUT);
}

void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);
cm = (duration/2) / 29.1;

Serial.print("距離: ");
Serial.print(cm);
Serial.println("cm");
delay(250);
if(cm<=5)

{digitalWrite(4, HIGH);
digitalWrite(0, HIGH);
digitalWrite(2, HIGH);
}

else if (5<cm<=10)

{digitalWrite(2, LOW);
digitalWrite(4, HIGH);
digitalWrite(0, HIGH);}
else {
digitalWrite(2, LOW);
digitalWrite(4, HIGH);
digitalWrite(0, LOW);
}
}
