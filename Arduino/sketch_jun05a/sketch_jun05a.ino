

const int boton1 = 4;
const int boton2 = 5;
const int tiempoAntirebote = 20;

int cuenta = 0;
int estadoBoton1;
int estadoBotonAnterior1;
int estadoBoton2;
int estadoBotonAnterior2;


//FUNCION/////////////////////////////
boolean antirebote(int pin){

  int contador = 0;
  boolean estado;
  boolean estadoAnterior;
  
  do{
    estado = digitalRead(pin);
    
    if(estado != estadoAnterior){  //Comparamos el estado actual con el anterior 
      contador = 0;                //Reinicia el contador
      estadoAnterior = estado;
    }
    else{
      contador = contador + 1;
    }
    delay(1);
    
  }while (contador < tiempoAntirebote);
   return estado; 
  }
//FUNCION/////////////////////////////



void setup() {
  
  Serial.begin(9600);
  pinMode(boton1,INPUT);
  pinMode(boton2,INPUT);
  pinMode(13,OUTPUT);

}

void loop() {
  
  estadoBoton1 = digitalRead(boton1);

  if(estadoBoton1 != estadoBotonAnterior1){
    if(antirebote(boton1)){
      cuenta++;
      Serial.println(cuenta);
    }
  }  
  estadoBotonAnterior1 = estadoBoton1;
 
  estadoBoton2 = digitalRead(boton2);

  if(estadoBoton2 != estadoBotonAnterior2){
    if(antirebote(boton2)){
      cuenta++;
      Serial.println(cuenta);
    }
  }  
  estadoBotonAnterior2 = estadoBoton2;
  


}










