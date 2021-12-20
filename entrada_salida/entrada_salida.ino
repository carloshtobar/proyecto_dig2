int analogPin = A0; // potentiometer wiper (middle terminal) connected to analog pin 0
                    // outside leads to ground and +5V
int salidaPin = 13;
int val = 0;  // variable to store the value read

void setup() {
  pinMode(salidaPin, OUTPUT);
  Serial.begin(9600);           //  setup serial
  Serial.println("Arduino inicializado");
}

void loop() {
  val = analogRead(analogPin);  // read the input pin
  Serial.println(val);          // debug value
  delay(2000);

  if(val > 500) {
   Serial.println("Valor de entrada mayor a 500"); 
   digitalWrite(salidaPin, HIGH);
  }
  else {
    digitalWrite(salidaPin, LOW);
  }
}
