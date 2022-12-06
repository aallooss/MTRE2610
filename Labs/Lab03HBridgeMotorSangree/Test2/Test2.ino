int speedPin = 9; // H-bridge enable pin for speed control
int motor1APin = 4; // H-bridge leg 1
int motor2APin = 3; // H-bridge leg 2
int ledPin = 13; // status LED
int speed_value_motor1; // value for motor speed

unsigned long previousMillis = 0;
unsigned long interval = 2000;
int a = 60;

void setup() {
// set digital i/o pins as outputs:
pinMode(speedPin, OUTPUT);
pinMode(motor1APin, OUTPUT);
pinMode(motor2APin, OUTPUT);
pinMode(ledPin, OUTPUT);

Serial.begin(115200);
}
//Winkler, DC motor control with the Arduino board, p.2
void loop() {
digitalWrite(ledPin, HIGH); // status LED is always on

unsigned long currentMillis = millis();

if (currentMillis - previousMillis > interval) {
 previousMillis = currentM
 .333333333333333333333
 
 
 
 
 
 
 
 
 illis;
 Serial.println("Test");
 //Serial.println(previousMillis);
 //Serial.println(a);
 

// put motor in forward motion
digitalWrite(motor1APin, HIGH); // set leg 1 of the H-bridge low
digitalWrite(motor2APin, LOW); // set leg 2 of the H-bridge high
// just invert the above values for reverse motion,
// i.e. motor1APin = HIGH and motor2APin = LOW
// control the speed 0- 255
speed_value_motor1 = 100; // half speed
analogWrite(speedPin, speed_value_motor1); // output speed as
// PWM value
}
analogWrite(speedPin, LOW); // output speed as

}
