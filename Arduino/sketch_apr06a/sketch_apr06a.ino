//Include the SPI Library
#include <SPI.h>

//Set the Slave Select Pin
//Other SPI Pins are set Automatically
//int SS = 10;
//int SS_1 = 10;

void setup() {
  //SET SS PIN DIRECTIONS
  //OTHERS ARE HANDLAED AUTOMATICALLY
  pinMode(SS, OUTPUT);

  //INITIALIZE SPI
  SPI.begin();
  
}

//Una función para enviar el dato automaticamente al llamarla
void enviar_mensaje(int dato){
  
  digitalWrite(SS, LOW);
  SPI.transfer(dato);
  digitalWrite(SS, HIGH);
  
  }

void loop() {
  
  //Voy a tratar de enviar un dato infinitamente para ver a que frecuencia transmite SCLK
  enviar_mensaje(387);
  

}
