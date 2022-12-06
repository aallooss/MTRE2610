const int buttonPin = 2;
const int motorPin1 = 4;
const int motorPin2 = 3;
const int enableMotor = 9;
const int motorSpeed = 150;
const int limitSwitch = 7;
const int armControl = 10;
const int suckerControl = 11;

volatile int count = 0;
int buttonState = 0;
int lastButtonState = 1;
unsigned long currentMicros = 0;
unsigned long lastMicros = 0;
int mode = 0;
int edgeCount = 2;

void setup() {
  pinMode(armControl, OUTPUT);
  pinMode(suckerControl, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(enableMotor, OUTPUT);
  Serial.begin(9600);
  attachInterrupt(0, encoderInterrupt, RISING);
  pinMode(limitSwitch, INPUT);
  analogWrite(enableMotor, motorSpeed);
}

void loop() {
  if(mode == 0) {
    if(digitalRead(limitSwitch)== HIGH)
    {
      digitalWrite(motorPin1, LOW);
      digitalWrite(motorPin2, LOW);
      count = 0;
      delay(1000);
      digitalWrite(armControl, HIGH);
      delay(1000);
      digitalWrite(suckerControl, HIGH);
      delay(1000);
      digitalWrite(armControl, LOW);
      delay(1000);
      mode = 1;
    }
    else
    {
      digitalWrite(motorPin1, LOW);
      digitalWrite(motorPin2, HIGH);
    }
  }
 if(mode == 1) {
  if (count > 2)
  {
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    count = 0;
    delay(1000);
    mode = 2;
  }
  else
  {
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
  }
 }
 if(mode == 2) {
  if (count > edgeCount)
  {
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    delay(1000);
    mode = 0;
  }
  else
  {
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
  }
  }
}

void encoderInterrupt()
{
  buttonState = digitalRead(buttonPin);
  Serial.println(count);
  currentMicros = micros();
  if(buttonState == LOW && lastButtonState == HIGH && currentMicros - lastMicros > 200000)
  {
    count++;
    lastMicros = micros();
  }
  lastButtonState = buttonState;
}
