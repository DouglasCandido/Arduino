/* Firmware utilizado para simular o funcionamento de um semáforo. */

#define VERMELHO 2
#define AMARELO 3
#define VERDE 4

void setup() {
  
  pinMode(VERMELHO, OUTPUT);
  pinMode(AMARELO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  
  Serial.begin(9600);
  Serial.println("Bem vindo ao Semaforo! \n");
    
}

void loop() {
     
  digitalWrite(VERMELHO, HIGH);
  Serial.println("Pare! \n");
  delay(3000);
  digitalWrite(VERMELHO, LOW);
      
  digitalWrite(AMARELO, HIGH);
  Serial.println("Atencao! \n");
  delay(2000);
  digitalWrite(AMARELO, LOW);
   
  digitalWrite(VERDE, HIGH);
  Serial.println("Dirija com cuidado! \n");
  delay(3000);
  digitalWrite(VERDE, LOW);
      
}
