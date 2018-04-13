const char* eventName = "matthews_event_2018";

int joystickPinX = D4; //
int joystickXValue = 0;

String numberAsString;

void setup()
{
  pinMode(joystickPinX, INPUT);
}

void loop()
{
  joystickXValue = digitalRead(joystickPinX);
 if (joystickXValue > 2000)
 {
    Particle.publish(eventName, String(joystickXValue));
    delay(1000);
 }

}
