#include <Servo.h>
Servo s;
void setup() {
  // put your setup code here, to run once:
s.attach(9);

}

void loop() {
  // put your main code here, to run repeatedly:
s.write(180);
delay(1000);
s.write(90);
delay(1000);
s.write(180);
delay(1000);
}
