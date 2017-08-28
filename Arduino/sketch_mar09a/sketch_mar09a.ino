/*Prueba de Escritura Analogica en Arduino UNO*/


const int PinPrueba = 3;
int AnalogValue = 155;
void setup() {
  
  pinMode(PinPrueba,OUTPUT);

}

void loop() {

    analogWrite(PinPrueba, AnalogValue);
  

}
