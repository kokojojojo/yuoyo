
int led=10, buzer=9, foto=A0;
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

// 1
  tone(buzer, 440, 300); 
  delay(300);
  tone(buzer, 330, 300); 
  delay(300);

  tone(buzer, 440, 300); 
  delay(300);
  tone(buzer, 330, 300); 
  delay(300);

  tone(buzer, 440, 300); 
  delay(300);
  tone(buzer, 415, 300); 
  delay(300);

  tone(buzer, 415, 300); 
  delay(300);
  delay(600);

// 2
  tone(buzer, 415, 300); 
  delay(300);
  tone(buzer, 330, 300); 
  delay(300);

  tone(buzer, 415, 300); 
  delay(300);
  tone(buzer, 330, 300); 
  delay(300);

  tone(buzer, 415, 300); 
  delay(300);
  tone(buzer, 440, 300); 
  delay(300);

  tone(buzer, 440, 300); 
  delay(300);
  delay(600);

// 3

tone(buzer, 440, 300); 
  delay(300);
  tone(buzer, 494, 300); 
  delay(300);

  tone(buzer, 494, 100); 
  delay(100);
  tone(buzer, 494, 100); 
  delay(100);

tone(buzer, 494, 300); 
  delay(300);
  tone(buzer, 494, 300); 
  delay(300);

tone(buzer, 523, 300); 
  delay(300);
  tone(buzer, 523, 100); 
  delay(100);

tone(buzer, 523, 100); 
  delay(100);
  tone(buzer, 523, 300); 
  delay(300);

  tone(buzer, 523, 300); 
  delay(300);
  tone(buzer, 523, 300); 
  delay(300);


  tone(buzer, 494, 300); 
  delay(300);
  tone(buzer, 440, 300); 
  delay(300);

    tone(buzer, 415, 300); 
  delay(300);
  tone(buzer, 440, 300); 
  delay(300);

  i=0;
}

delay(100);
}
