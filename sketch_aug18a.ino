
int l=3, termo=A0, val;
float voltage;
void setup() {
  // put your setup code here, to run once:
pinMode(l, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
val=analogRead(termo);
voltage=(val*5.0/1023);
if(voltage*100-273.15 > 28)
{
  digitalWrite(l, HIGH);
}
else 
digitalWrite(l, LOW);
delay(1000);
}
