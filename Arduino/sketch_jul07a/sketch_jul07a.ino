#include <PWM.h>
int32_t frequency= 30000; // Frequency (in Hz)
void setup() {
  
  InitTimerSafe();
  bool success = SetPinFrequencySafe(9,frequency);
  if(success){
    pinMode(13,OUTPUT);
    digitalWrite(13,HIGH);
    }
}

void loop() {
  float hola_mundo=2;
  pwmWrite(hola_mundo);
  delay(30);
}
