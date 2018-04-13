void setup()
{
 Particle.subscribe ("wearingdata_Sarah_2018", mattsHandleFunc);
}

void loop()
{
}

// Subscription Function
void mattsHandleFunc (const char* event, const char* data)
{
  // flashLED(3,100);
  rotateServo(D0, 100, 3);
}

/** rotate a servo a number of times */
void rotateServo (int servoPin, int interval, int repeat)
{
  Servo rotatingServo, secondServo;
  rotatingServo.attach(servoPin);
  secondServo.attach(D1);
  for (int i = 0; i < repeat; ++i)
  {
    for (int degrees = 0; degrees < 180; ++degrees)
    {
      rotatingServo.write(degrees);
      secondServo.write(180-degrees);
      delay(interval);
    }
  }
}

//Led Flash function
void flashLED (int numberOfFlashes, int interval)
{
  pinMode(D7,OUTPUT);
  for (int i = 0; i < numberOfFlashes; ++i)
  {
    digitalWrite(D7, HIGH);
    delay(interval);
    digitalWrite(D7, LOW);
    delay(interval);
  }
}
