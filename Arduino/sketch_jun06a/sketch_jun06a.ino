#define LedPrender 13

float hola=0;
void setup() {
  Serial.begin(9600);
  pinMode(LedPrender,OUTPUT);

}

void loop() {

  hola=12%3;
  Serial.println(hola);
  digitalWrite(LedPrender,HIGH);
  delay(500);
  digitalWrite(LedPrender,LOW);
  delay(500);
  

}
