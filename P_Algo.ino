# Xm - Posição 

int analogPin = A0; // Saída Vo

int Xm = 0; // Variável para guardar valor lido





void setup() {
  Serial.begin(9600);  // Configura a porta serial
}

void loop() {
  Xm = analogRead(analogPin); // lê o pino de entrada
  Serial.println(Xm);         // imprime o valor na porta serial

}


# IMPLEMENTAR FILTROS DIGITAIS

/* - Filtrar harmônicos específicos
 * -  
 *  
 *  
 */
