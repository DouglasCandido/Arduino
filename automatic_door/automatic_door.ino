/*  Firmware utilizado para controlar um circuito Ponte H. Pode ser aplicado no desenvolvimento de fechaduras automáticas. */

int left = 3;
int right = 13;

int variable_one = 0;
int variable_two = 0;

void setup(){
  
  pinMode(right, OUTPUT);
  pinMode(left, OUTPUT);
  
  Serial.begin(9600);
  
}

void loop(){
  
  if (Serial.read() == 'A'){ // Se a tecla 'A' for pressionada, o motor girará no sentido anti-horário e a bandeja é direcionada para a direita
    digitalWrite(left, HIGH);
    digitalWrite(right, LOW);
    delay(1000);
    digitalWrite(left, LOW);
  
  }else if(Serial.read() == 'B'){ // Se a tecla 'B' for pressionada, o motor girará no sentido horário e a bandeja é direcionada para a esquerda
    digitalWrite(right, HIGH);
    digitalWrite(left, LOW);
    delay(1000);
    digitalWrite(right, LOW);
  }
  
}

