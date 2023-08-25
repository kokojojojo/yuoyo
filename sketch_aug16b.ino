int led = 3, button = 2, val = 0, state = 0;

void setup() {
  // put your setup code here, to run once:

pinMode(led, OUTPUT);
pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
val = digitalRead(button);
delay(200);
if(val == HIGH)
{
  state = 1 - state;
  if(state==1)
digitalWrite(led, HIGH);
else
digitalWrite(led, LOW);
}
}
