
int l = 5;
void setup() {
  // put your setup code here, to run once:
pinMode(l, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(l, HIGH);
delay(250);
digitalWrite(l, LOW);
delay(250);
}
