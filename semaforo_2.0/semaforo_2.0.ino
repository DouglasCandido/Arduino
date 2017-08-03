/* Firmware utilizado para simular o funcionamento de um semáforo (Versão aprimorada do semaforo_1.0).  */

int vermelho = 2;
int amarelo = 3;
int verde = 4;

void setup() {
 
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  
  Serial.begin(9600);
  
  Serial.println("Semaforo");

}

void loop() {
  
  do{
    
    switch(Serial.read()){
      case 'R':
        digitalWrite(4,HIGH);
        delay(2000);
        digitalWrite(4,LOW);
        break;
  
      case 'Y':
        digitalWrite(3,HIGH);
        delay(2000);
        digitalWrite(3,LOW);
        break;
      
      case 'G':    
        digitalWrite(2,HIGH);
        delay(2000);
        digitalWrite(2,LOW);
        break;
    }
     
  }while(Serial.available() > 0);

}
