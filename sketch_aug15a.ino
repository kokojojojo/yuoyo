int red=9, green=10, blue=11;
void setup() {
  // put your setup code here, to run once:
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(blue, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(red, HIGH);
digitalWrite(green, HIGH);
digitalWrite(blue, HIGH);
delay(3000);

digitalWrite(red, LOW);
digitalWrite(green, LOW);
digitalWrite(blue, LOW);
delay(1000);

digitalWrite(red, HIGH);
delay(200);
digitalWrite(red, LOW);
delay(200);


digitalWrite(green, HIGH);
delay(200);
digitalWrite(green, LOW);
delay(200);


digitalWrite(blue, HIGH);
delay(200);
digitalWrite(blue, LOW);
delay(200);

digitalWrite(red, LOW);
digitalWrite(green, LOW);
digitalWrite(blue, LOW);
}
