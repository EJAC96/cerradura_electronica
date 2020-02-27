void setup() {
  pinMode(3, OUTPUT); //Configurar el pin 3 como una salida

}

void loop() {
  digitalWrite(3, HIGH);  //Encender el pin 3 
  delay(1000);            //Esperar 1 seg. x 1000 = 1000
  digitalWrite(3, LOW);   //Apagar el pin 3
  delay(1000);            //Esperar 1 seg

}
