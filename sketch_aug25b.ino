
int led=9, buzer=10, foto=A0;
int svet = 510, tma=34;
int val, i=0;
void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
pinMode(buzer, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
val=analogRead(foto);
Serial.println(val);
if(val<tma+50)
{
  digitalWrite(led, HIGH);
  i=1;
  delay(500);
}

if(val>svet-50 && i==1)
{
  digitalWrite(led, LOW);

delay(600);
  tone(10, 329.63, 300);
  delay(350);
  // play d4# 
  tone(10, 311.13, 300);
  delay(350);
  // play e4
  tone( 10, 329.63, 300);
  delay(350);
  // play d4# 
  tone( 10,311.13, 300);
  delay(350);
  // play e4
  tone(10, 329.63, 300);
  delay(350);
  // play b3
  tone( 10, 246.94, 300);
  delay(400);
  // play d4
  tone(10, 293.66,300);
  delay(400);
  // play c4
  tone(10, 261.63,300);
  delay(400);
  // play a3
  tone(10, 220, 900);
  delay(1000);
  // play d3
  tone(10,146.83, 300);
  delay(350);
  //play f3
  tone(10, 174.61, 300);
  delay(400);
  //play a3
  tone(10, 220, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 900);
  delay(1000);
  // play f3
  tone(10, 174.61, 300);
  delay(400);
  // play a3#
  tone(10, 233.08, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 300);
  delay(400);
  // play c4
  tone(10, 261.63, 900);
  delay(1000);
  delay(300);
  // play e4
  tone(10, 329.63, 300);
  delay(400);
  // play d4#
  tone(10, 311.13, 300);
  delay(400);
  // play e4
  tone(10, 329.63, 300);
  delay(400);
  // play d4#
  tone(10, 311.13, 300);
  delay(400);
  // play e4
  tone(10, 329.63, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 300);
  delay(400);
  // play d4
  tone(10, 293.66, 300);
  delay(400);
  // play c4
  tone(10, 261.63, 300);
  delay(400);
  // play a3
  tone(10, 220, 900);
  delay(1000);
  // play d3
  tone(10, 146.83, 300);
  delay(400);
  // play f3
  tone(10, 174.61, 300);
  delay(400);
  // play a3
  tone(10, 220, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 900);
  delay(1000);
  // play f3
  tone(10, 174.61, 300);
  delay(400);
  // play c4
  tone(10, 261.63, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 300);
  delay(400);
  // play a3
  tone(10, 220, 900);
  delay(1000);
  // play b3
  tone(10,246.94, 300);
  delay(400);
   // play c4
  tone(10, 261.63, 300);
  delay(400);
  // play d4
  tone(10, 293.66, 300);
  delay(400);
  // play e4
  tone(10, 329.63, 900);
  delay(1000);
  // play g3
  tone(10, 196, 300);
  delay(400);
  // play f4
  tone(10, 349.23, 300);
  delay(400);
  //play e4
  tone(10, 329.23, 300);
  delay(400);
  // play d4
  tone(10, 293.63, 900);
  delay(1000);
  // play e3
  tone(10,164.81, 300);
  delay(400);
  // play e4
  tone(10, 329.63, 300);
  delay(400);
  // play d4
  tone(10, 293.63, 300);
  delay(400);
  // play c4
  tone(10, 261.63, 900);
  delay(1000);
  // play d3
  tone(10, 146.83, 300);
  delay(400);
    // play d4
  tone(10, 293.63, 300);
  delay(400);
  // play c4
  tone(10, 261.63, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 900);
  delay(1000);
  delay(400);
  // play e4
  tone(10, 329.63, 300);
  delay(400);
  // play d4# 
  tone(10, 311.13, 300);
  delay(350);
  // play e4
  tone( 10, 329.63, 300);
  delay(350);
  // play d4# 
  tone( 10,311.13, 300);
  delay(350);
  // play e4
  tone(10, 329.63, 300);
  delay(350);
  // play b3
  tone( 10, 246.94, 300);
  delay(400);
  // play d4
  tone(10, 293.66,300);
  delay(400);
  // play c4
  tone(10, 261.63,300);
  delay(400);
  // play a3
  tone(10, 220, 900);
  delay(1000);
  // play d3
  tone(10,146.83, 300);
  delay(350);
  //play f3
  tone(10, 174.61, 300);
  delay(400);
  //play a3
  tone(10, 220, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 900);
  delay(1000);
  // play f3
  tone(10, 174.61, 300);
  delay(400);
  // play a3
  tone(10, 233.08, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 300);
  delay(400);
  // play c4
  tone(10, 261.63, 900);
  delay(1000);
  delay(300);
  // play e4
  tone(10, 329.63, 300);
  delay(400);
  // play d4#
  tone(10, 311.13, 300);
  delay(400);
  // play e4
  tone(10, 329.63, 300);
  delay(400);
  // play d4#
  tone(10, 311.13, 300);
  delay(400);
  // play e4
  tone(10, 329.63, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 300);
  delay(400);
  // play d4
  tone(10, 293.66, 300);
  delay(400);
  // play c4
  tone(10, 261.63, 300);
  delay(400);
  // play a3
  tone(10, 220, 900);
  delay(1000);
  // play d3
  tone(10, 146.83, 300);
  delay(400);
  // play f3
  tone(10, 174.61, 300);
  delay(400);
  // play a3
  tone(10, 220, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 900);
  delay(1000);
  // play f3
  tone(10, 174.61, 300);
  delay(400);
  // play c4
  tone(10, 261.63, 300);
  delay(400);
  // play b3
  tone(10, 246.94, 300);
  delay(400);
  // play a3
  tone(10, 220, 900);
  delay(1000);
  
  delay(5000);

  i=0;
}

delay(100);
}
