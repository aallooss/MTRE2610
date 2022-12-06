int motorPin = 9;

void setup() {
   pinMode(motorPin, OUTPUT);
   Serial.begin(9600);
   while (! Serial);
   Serial.println("Speed 0 to 255");
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  delay(1);
   if (Serial.available()) {
      int speed = sensorValue;
      if (speed >= 0 && speed <= 255) {
         analogWrite(motorPin, speed);
      }
   }
}
