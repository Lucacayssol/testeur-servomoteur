#include <ESP32Servo.h>
int mode=1;
int i=0;
Servo monservo;
void setup() {
  monservo.attach(4);
}

void loop() {
  monservo.write(i);
  delay(10);
  if (i==180) {
    mode=2;
  }
  if (i==0) {
    mode=1;

  }
  if (mode==1) {
    i++;

  }
  else{
    i=i-1;
  } 
}

