

void setup() {
  
  Serial.begin(9600); //Inicializamos el puerto serie

}

void loop() {

  delay(1000);
  
  while (Serial.available() == 0); // Espera a recibir datos
  
  int valor = Serial.read();

  valor= valor+1;
  
  Serial.println(valor);

}
