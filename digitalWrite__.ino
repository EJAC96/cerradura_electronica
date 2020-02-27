int boton1=0, boton2=0;

void setup() {
  pinMode(3, OUTPUT); //Establece el pin 3 como una salida
  pinMode(4, OUTPUT); //Establece el pin 4 como una salida
  pinMode(8, INPUT);  //Establece el pin 8 como una entrada
  pinMode(9, INPUT);  //Establece el pin 9 como una entrada
}
void loop() {
  boton1=digitalRead(8); //Lee la lectura digital del pin 8 
  boton2=digitalRead(9);  //Lee la lectura digital del pin 9
  
  if(boton1==HIGH){  //Evalua si es presionado el boton1, en caso de ser verdadero, ingresa
   //Encender motor
   digitalWrite(3, LOW);  //Comando para apagar la energia en el pin 3
   digitalWrite(4, HIGH); //Comando para enviar energia digital en el pin 4
   delay(2500); //2.5 seg = 2500 
  }
  if(boton2==HIGH){ //Evalua si es presionado el boton2, en caso de ser verdadero, ingresa
  //Apagar motor
  digitalWrite(3, HIGH);  //Comando para enviar energia digital en el pin 3
  digitalWrite(4, LOW);   //Comando para apagar la energia en el pin 4
  delay(2500);//2.5 seg = 2500
  }

  digitalWrite(3, LOW);   //Comando para apagar la energia en el pin 3
  digitalWrite(4, LOW);   //Comando para apagar la energia en el pin 4
  
 }
