
SoftwareSerial nextion(RxD,TxD); //Recordar que puedo usar el virtual o puertos en hardware

#include <Nextion.h>

#define RxD 2
#define TxD 3



Nextion myNextion(nextion,9600); //Se crea un objeto tipo Nextion que se va a comunicar a 9600 bauds

void setup() {
  
  myNextion.init();

}

void loop() {

  
  

}