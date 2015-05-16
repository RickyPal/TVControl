

const int buttonPin = 4;     // the number of the pushbutton pin
const int ledPin =  8;      // the number of the LED pin


int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // LED signifies successful Serial transmit
  pinMode(ledPin, OUTPUT);
  // button introduction
  pinMode(buttonPin, INPUT);
  //radio on
  Serial.begin (9600);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
       
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == LOW) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    Serial.println ("2");
    delay (200);
  }
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
    //Serial.println ("NoDeploy");
    delay (200);
  }
}
