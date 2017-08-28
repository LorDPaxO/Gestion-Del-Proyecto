#define LED_PIN 13
#define SWITCH_PIN 2

int LED_ESTADO = LOW;

void setup(){
  pinMode(LED_PIN, OUTPUT);
  pinMode(SWITCH_PIN, INPUT);
  digitalWrite(LED_PIN, LED_ESTADO);
}

void loop(){  

   if(digitalRead(SWITCH_PIN)){
    delay(100);
    if(digitalRead(SWITCH_PIN)==1){
         LED_ESTADO = !LED_ESTADO;
         digitalWrite(LED_PIN, LED_ESTADO);          
      }
  }
}
