int led = 3, button = 2, val = 0;

void setup() {
  // put your setup code here, to run once:

pinMode(led, OUTPUT);
pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
val = digitalRead(button);
if(val == HIGH)
digitalWrite(led, HIGH);
else
digitalWrite(led, LOW);
}
