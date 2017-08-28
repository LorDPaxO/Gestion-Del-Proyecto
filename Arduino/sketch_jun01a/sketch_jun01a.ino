#include <Servo.h>

Servo servo1;
int hola=1;

void setup() {

  servo1.attach(3);
  servo1.write(90);
}

void loop() {
  
  if(hola==1){
  servo1.write(0);
  delay(200);
  servo1.write(10);
  delay(200);
  servo1.write(20);
  delay(200);
  servo1.write(30);
  delay(200);
  servo1.write(40);
  delay(200);
  servo1.write(50);
  delay(200);
  servo1.write(60);
  delay(200);
  servo1.write(70);
  delay(200);
  servo1.write(80);
  delay(200);
  servo1.write(90);
  delay(4000);
  }

  
  
}
