//Parachute Sequence
// Deploy bit = 2
//button pin = 4
//xbee on channel 1337

const int button = 8;
int buttonState = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(button, INPUT);
//RADIO
Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if (button == LOW) {
  Serial.println (2);
  delay (5);
}
}
