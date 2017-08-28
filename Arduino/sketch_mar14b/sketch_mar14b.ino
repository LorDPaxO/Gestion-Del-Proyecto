void setup() {
  Serial.begin(9600);

}

int x=0;
double Salida=0;

void loop() {

  while(x <=10){

        Salida =x/0.001; 
        x++;
    Serial.println(Salida);
    delay(500);
    
    }
  

}
