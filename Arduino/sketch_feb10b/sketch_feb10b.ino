void setup() {


pinMode(5, OUTPUT);
pinMode(13, OUTPUT);
}

void loop() {

    digitalWrite(5, HIGH);  
    digitalWrite(13, HIGH);
  delay(10);             
  
  digitalWrite(5, LOW);    
  digitalWrite(13, LOW);
  delay(1150);     

}
