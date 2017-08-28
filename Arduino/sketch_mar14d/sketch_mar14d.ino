void setup() {
  pinMode(3,OUTPUT);

}

void loop() {
  
  for(int hola=1; hola<256 ; hola++){
    analogWrite(3, hola);
    delayMicroseconds(700);
    }
  

}
