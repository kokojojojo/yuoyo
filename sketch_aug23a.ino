int l=3;

void setup() {
  // put your setup code here, to run once:
pinMode(l, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(l, HIGH);
delay(1000);
digitalWrite(l, LOW);
delay(1000);
}
