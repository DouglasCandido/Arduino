/* Firmware utilizado para controlar um relé. */

#define relay_pin 2
bool activate_relay = false;

void setup(){
	
  Serial.begin(9600);
  pinMode(relay_pin, OUTPUT);
  
}

void loop(){
	
  if (Serial.available() != 0 && Serial.read() == 'A'){
    
  activate_relay = !activate_relay;		
  
}
	
   if (activate_relay){
	
   digitalWrite(relay_pin, HIGH);
        
}

}
