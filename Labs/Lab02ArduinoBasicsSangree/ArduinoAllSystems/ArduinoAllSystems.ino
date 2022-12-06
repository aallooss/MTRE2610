#include <elapsedMillis.h>
int run;
int timesince;
int motorPin = 6;
int analogPin = A0;   // potentiometer connected to analog pin 3
int val = 0;         // variable to store the read value
int buttonState = 0;

const unsigned long eventInterval = 1000;
unsigned long previousTime = 0;


// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;  


void setup()
{
  run = 0; //starts stopped
   pinMode(ledPin, OUTPUT);   // sets the pin as output
   pinMode(buttonPin, INPUT);
   digitalWrite(LED_BUILTIN, HIGH);
   Serial.begin(9600);
   delay(150);
    run = 0; //starts stopped

   pinMode(buttonPin, INPUT_PULLUP);
  
}



void loop()
{

unsigned long currentTime = millis();

  
 if(digitalRead(buttonPin) == HIGH) //funcitons based off of button pulling input pin LOW
  {

if(currentTime - previousTime >= eventInterval)
{
//while (run = 0){
  digitalWrite(LED_BUILTIN, LOW);  
  Serial.println("one");
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  val = analogRead(analogPin);   // read the input pin
  analogWrite(motorPin, val / 4);// analogRead values go from 0 to 1023, analogWrite values from 0 to 255
  delay(1000);
  analogWrite(motorPin, LOW);
  previousTime = currentTime;
  }
  }
  }

  /*
  if(digitalRead(buttonPin) == LOW) //funcitons based off of button pulling input pin LOW
  {
     if(run == 0)
     {
         run = 255;
     }
     else
     {
         run = 0;
     }
  }

  if(run > 0)
  {
   uint32_t period = 5 * 60000L;       // 5 minutes

for( uint32_t tStart = millis();  (millis()-tStart) < period;  ){
  val = analogRead(analogPin);   // read the input pin
  analogWrite(motorPin, val / 4);  // analogRead values go from 0 to 1023, analogWrite values from 0 to 255
  }
  }
}
*/
/*
void loop()
{
  
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    val = analogRead(analogPin);   // read the input pin
  analogWrite(ledPin, val / 4);
  delay(5000);
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);    
  } else {
    // turn LED off:
    delay(10);
  }
  val = analogRead(analogPin);   // read the input pin
  analogWrite(ledPin, val / 4);  // analogRead values go from 0 to 1023, analogWrite values from 0 to 255
}
*/
