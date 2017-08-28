void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}


int hola = 0;
void loop() {
  // put your main code here, to run repeatedly:
  while(hola<100){
  hola=hola+1;
  Serial.write(byte(hola));
  }
}
