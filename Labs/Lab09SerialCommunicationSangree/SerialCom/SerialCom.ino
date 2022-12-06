int count;
int val;
char ch;
int potentiometer;

void setup() {
  count = 0;
  val = 0;
  potentiometer = A0;
  ch = ' ';
  Serial.begin(9600);
  pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
  //Part 1
  /*if(count < 2000)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.print(100);
  }
  else
  {
    digitalWrite(LED_BUILTIN, LOW);
    Serial.print(200);
  }
  count++;
  if(count>4000)
  {
    count = 0;
  }*/
  
  //part 2
  /*while(Serial.available())
  {
     ch = Serial.read();
  }
  if (ch == 'q')
  {
    digitalWrite(LED_BUILTIN, HIGH);
  }
  if (ch == 'w')
  {
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(200);*/

  //part 3
  /*while(Serial.available())
  {
     ch = Serial.read();
  }
  if (ch == 'q')
  {
    val = analogRead(potentiometer)/4;
    Serial.print((char)val);
  }*/

  //part 4
    while(Serial.available())
  {
     ch = Serial.read();
  }
  if (ch == 'q')
  {
    val = analogRead(potentiometer)/4;
    if (val > 0)
    {
      Serial.print(0);
      Serial.print((char)val);
      Serial.print((char)val);
    }
  }
}
