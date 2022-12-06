int sensor = A5;
int pwm_pin = 10;

int val;
float diff;
float accum;
int pulse;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pwm_pin, OUTPUT);
}

void loop() {
  val = analogRead(sensor);
  Serial.println(val);
  //delay(500);
  
  //Propportional Control
  //|diff| = (SensorValue - 220) * popgain        (popgain can equal 1~10)
  diff = ((val-220) * 4);

  //Integral Control
  //accumlate = (diff + accumulate) * accumGain
  accum = ((diff + accum) * 0.2);


  //PI control
  diff = diff + accum;
  
  
  if (diff > 500){
    diff = 500;  
  }
  pulse = 1500 + diff;
 

  digitalWrite(pwm_pin, HIGH);
  delayMicroseconds(pulse);
  digitalWrite(pwm_pin,LOW);
  delayMicroseconds(20000-pulse);
}
