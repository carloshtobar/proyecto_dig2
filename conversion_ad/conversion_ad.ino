/*
 * Conversion Analogo a Digital
 */

char buffer[50];
char x[5];

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
  int valor_leido = analogRead(A0);
  double valor_analogico = 5.0/1024*valor_leido;
  dtostrf(valor_analogico,5,2,x);
  sprintf(buffer, "Valor digital: %d de entrada analogica: %s",valor_leido,x);
  
  Serial.println(buffer);
  delay(1000);
}
