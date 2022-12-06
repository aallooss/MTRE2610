int speedPin = 9;
int motor1APin = 4;
int motor2APin = 3;
int ledPin = 13;
int speed_value_motor1;

unsigned long previousMillis = 0;
unsigned long interval = 2000;
int a = 60;

void setup() {
pinMode(speedPin, OUTPUT);
pinMode(motor1APin, OUTPUT);
pinMode(motor2APin, OUTPUT);
pinMode(ledPin, OUTPUT);

Serial.begin(115200);
}
void loop() {
digitalWrite(ledPin, HIGH);
unsigned long currentMillis = millis();

if (currentMillis - previousMillis > interval) {
 previousMillis = currentMillis;
 Serial.println("Test");

digitalWrite(motor1APin, HIGH);
digitalWrite(motor2APin, LOW);
speed_value_motor1 = 100; 
analogWrite(speedPin, speed_value_motor1);
}
//analogWrite(speedPin, HIGH);

}
