int led = 3, smth=5, dualipa=6, button = 2, val = 0, state = 0, i=0;

void setup() {
  // put your setup code here, to run once:

pinMode(led, OUTPUT);
pinMode(smth, OUTPUT);
pinMode(dualipa, OUTPUT);
pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
val = digitalRead(button);

if(val == HIGH)
{
  state = 1 - state;
  if(state==1)
  {
    for(i = 0; i<=255; i++)
    {
      analogWrite(smth, i);
      
      analogWrite(led, i);

      //analogWrite(smth, i);
      analogWrite(dualipa, i);
      delay(5);
    }
  }

  if(state==0)
  {
    for(i=255; i>=0; i--)
    {
      
      analogWrite(smth, i);
  
      analogWrite(led, i);

      //analogWrite(smth, i);
      analogWrite(dualipa, i);
      delay(5);
    }
  }
}

}
