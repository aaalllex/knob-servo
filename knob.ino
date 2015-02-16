//knob  home work by Alex

#include <Servo.h>

Servo myservo;

int potenzpin=0;
int value;

void setup()
{
  myservo.attach(9); //attach servo to pin 9
}

void loop ()
{
  value = analogRead(potenzpin);
  value = map(value, 0, 1023, 0, 255);
  myservo.write(value);
  delay(15);
}
