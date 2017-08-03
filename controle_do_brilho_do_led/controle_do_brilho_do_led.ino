/* Firmware utilizado para controlar a intensidade do brilho de um LED, esse controle é feito por um potenciômetro. */

int ledPin = 1;
int potPin = 2;
int valor = 0;

void setup() {

 pinMode(ledPin, OUTPUT);
 Serial.begin(9600);

}

void loop() {

  valor = analogRead(potPin);
  
  analogWrite(ledPin, (valor / 4));

  Serial.println(valor);
  
}
