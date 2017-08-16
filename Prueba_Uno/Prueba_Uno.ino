
#include <Nextion.h>

//Numero de pines digitales para usar puertos virtuales
#define RxD 2
#define TxD 3
//Se Conecta Tx pantalla con 2
//Se Conecta Rx pantalla con 3
//No cruzar cables de comunicacion
//La librería funciona sin problemas para el arduinno nano
//De la misma forma

SoftwareSerial nextion(RxD,TxD); //Recordar que puedo usar el virtual o puertos en hardware
int Valor_Escritura = 10;

Nextion myNextion(nextion,9600); //Se crea un objeto tipo Nextion que se va a comunicar a 9600 bauds

//Inicializar todo lo necesario
void setup() {

  pinMode(13, OUTPUT);
  Serial.begin(9600);
  myNextion.init();
  //nextion.begin(9600);
  

}


void loop() {

  myNextion.setComponentText("page0.b5","!Hola");
  delay(1000);
  myNextion.setComponentText("page0.b5","Mundo!");
  //Captura de un valor de objeto en pantalla
  delay(1000);
  /*int hola = myNextion.getComponentValue("page0.n1");
  
  if(hola==1){
        digitalWrite(13,HIGH);
        delay(100);
        //Valor_Escritura++;
        myNextion.setComponentText("page0.b5","Hola");
    }
    else{
        digitalWrite(13,LOW);
        delay(100);
      }
   
   myNextion.setComponentValue("page0.n0",Valor_Escritura);

  Serial.println(hola);
  /*myNextion.setComponentValue("page0.n0",valor_potencia);
  delay(2000);
  myNextion.setComponentValue("page0.n0",7);
  */
}
