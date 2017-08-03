/* Firmware utilizado para controlar a velocidade com que o LED alterna entre aceso e apagado, esse controle é feito por um potenciômetro. */

int ledPin = 1;
int potPin = 2;

void setup() {

 pinMode(ledPin, OUTPUT);

}

void loop() {

  digitalWrite(ledPin, HIGH);
  delay(analogRead(potPin));
  
  digitalWrite(ledPin, LOW);
  delay(analogRead(potPin));

}
