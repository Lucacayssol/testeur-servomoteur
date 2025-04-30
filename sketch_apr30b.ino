#include <Servo.h>
Servo test;
int valeur = 0;
void setup() {
  // put your setup code here, to run once:
  test.attach(2);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(3) = HIGH) {
    valeur = valeur + 5;
  }
  if(digitalRead(4) = HIGH) {
    valeur = valeur + 5;
  }
  test.write(valeur);
}
