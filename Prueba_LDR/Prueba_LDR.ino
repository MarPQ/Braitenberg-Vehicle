const int LDR = A0;


void setup() {
  Serial.begin(9600);
  pinMode(LDR,INPUT);

}

void loop() {
  int LDR_estado = analogRead(LDR);
  Serial.println(LDR_estado);

  if (LDR_estado < 30){

    Serial.println("Oscuridad detectada");
  }
  delay(100);
}
