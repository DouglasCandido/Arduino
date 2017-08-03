/* Firmware utilizado para ler o valor de um potenciômetro. */

int potenciometro = 0;
int valor = 0;

void setup() {

  Serial.begin(9600);

}

void loop() {

  valor = analogRead(potenciometro);
  
  Serial.println(valor);
  delay(100);

}
