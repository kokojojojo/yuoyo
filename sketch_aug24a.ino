#include <Servo.h>


Servo serv;
int serva = 7;
int foto = A0;
int val = 0, ugol = 90;
int svet = 510, tma = 34;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  serv.attach(serva);
}

void loop() {
  val = analogRead(foto);delay(500);
  // put your main code here, to run repeatedly:
Serial.println(val);
ugol = map(val,tma, svet, 0, 180);
serv.write(ugol);

}
