
int l=3, termo=A0, val, temp;
float voltage;
void setup() {
  // put your setup code here, to run once:
pinMode(l, OUTPUT);
Serial.begin(9600);
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

temp=voltage*100-273.15;
Serial.println(temp);
delay(1000);
}
