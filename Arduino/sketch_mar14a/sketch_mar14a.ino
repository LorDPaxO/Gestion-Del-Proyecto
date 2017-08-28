void setup() {

  Serial.begin(9600);
  analogWriteResolution(10);
}
int Salida_Entero=0;
double Salida_Double;
double Voltaje_Salida=0;
double valor=0;
void loop() {
  
  for(float angulo=0; angulo<=3.1416*2 ; angulo +=0.01 ){
      valor = sin(angulo);
      Voltaje_Salida = valor*1.65 + 1.65;
      Salida_Double = Voltaje_Salida/0,003222656;
      Salida_Entero = int(Salida_Double);
      analogWrite(A0,Salida_Entero);
      delay(1000);
      Serial.println();
      Serial.print("Valor de salida: ");
      Serial.print(Salida_Entero);
    }
    
  
  
  



}
