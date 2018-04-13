int relaySwitchPin = D3; // Pin connected to switch pin of a relay

void setup()
{
  pinMode(relaySwitchPin, OUTPUT);
}

void loop()
{
  digitalWrite(relaySwitchPin, HIGH);
  delay(1000);
  digitalWrite(relaySwitchPin, LOW);
  delay(1000);
}
