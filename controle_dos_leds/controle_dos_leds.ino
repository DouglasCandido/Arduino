/* Firmware utilizado para controlar o estado de vários LEDs. */

#define VERMELHO 2
#define AMARELO 3
#define VERDE 4

void setup() {
  
  pinMode(VERMELHO, OUTPUT);
  pinMode(AMARELO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  
  Serial.begin(9600);
  
  Serial.println("Digite 'A' para acender o LED vermelho; 'B' para acender o LED Amarelo; 'C' para acender o LED Verde");
    
}

void loop() {
  
  do{
    
    if(Serial.read() == 'A' || Serial.read() == 'a'){
   
      digitalWrite(VERMELHO, HIGH);
      
      delay(2000);
      
      digitalWrite(VERMELHO, LOW);
    
  }
  else if(Serial.read() == 'B' || Serial.read() == 'b'){
   
    digitalWrite(AMARELO, HIGH);
    
    delay(2000);
    
    digitalWrite(AMARELO, LOW);
   
 }
 else if(Serial.read() == 'C' || Serial.read() == 'c'){
   
   digitalWrite(VERDE, HIGH);
   
   delay(2000);
   
   digitalWrite(VERDE, LOW);
    
  }
