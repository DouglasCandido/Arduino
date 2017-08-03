/* Firmware utilizado para controlar um Servomotor, esse controle é feito por um potenciômetro.  */

#include <Servo.h>

Servo s;
int const potPin = 1;
int const servoPin = 2;
int valor;

void setup() {

 s.attach(servoPin);

}

void loop() {

  valor = analogRead(potPin);

  valor = map(valor, 0, 1023, 0, 180);

  s.write(valor);
  delay(10);

}
