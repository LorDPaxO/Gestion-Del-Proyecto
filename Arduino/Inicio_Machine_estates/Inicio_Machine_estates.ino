

//DEFINICION DE ESTADOS
#define ESPERA 1
#define ENCENDER_E 2
#define APAGAR_E 3
#define ALARMA 4
#define ABRIR_P 5


//DEFINICIÓN DE ENTRADAS
#define SM 6
#define SF 7

//DEFINICIÓN DE SALIDAS
#define E 8
#define P 9
#define A 10



void setup() {
  Serial.begin(9600);
  //SALIDAS
  pinMode(E,OUTPUT);
  pinMode(P,OUTPUT);
  pinMode(A,OUTPUT);

  
}

void loop() {

  //Hacer case para máquina de estados
  //Creo que podemos incluir esto en el uC principal para no hacer mas conexiones fisicas

}

//VOY A DEFINIR QUE HAGO EN CADA ESTADO
void ESTADO_ESPERA(){
   digitalWrite(E,LOW);
   digitalWrite(P,LOW);
   digitalWrite(A,LOW);
}

void ESTADO_ENCENDER_E(){
   digitalWrite(E,HIGH);
   digitalWrite(P,LOW);
   digitalWrite(A,LOW);
}

void ESTADO_ALARMA(){
   digitalWrite(E,LOW);
   digitalWrite(P,LOW);
   digitalWrite(A,HIGH);
}


