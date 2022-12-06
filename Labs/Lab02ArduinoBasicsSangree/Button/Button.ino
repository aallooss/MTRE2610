// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin
int i = 1;
// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbuton is pressed. If it is, the buttonState is HIGH:
  while((int i = 1) < (50));
{
  //digitalWrite(LED_BUILTIN, HIGH);  
  Serial.println("one");
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  //digitalWrite(LED_BUILTIN, LOW);
  //val = analogRead(analogPin);   // read the input pin
  //analogWrite(motorPin, val / 4);// analogRead values go from 0 to 1023, analogWrite values from 0 to 255
  }
  delay(5000);
  }
}
