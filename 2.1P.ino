void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  //V
  dot();
  dot();
  dot();
  dash();
  
  //A
  dot();
  dash();
  
  //N
  dash();
  dot();
  
  //S
  dot();
  dot();
  dot();
  
  //H
  dot();
  dot();
  dot();
  dot();
}

void dot()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(4000);
}

void dash()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(4000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(4000);
}
