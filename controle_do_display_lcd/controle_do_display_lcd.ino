/* Firmware utilizado para controlar um display LCD 16x2. */

#include <LiquidCrystal.h> // Inclui a biblioteca do LCD
 
LiquidCrystal lcd(3, 8, 9, 4 , 5, 6, 7); // Configura os pinos do Arduino para se comunicar com o LCD
 
int temp; //Inicia uma variável inteira(temp), para escrever no LCD a contagem do tempo
 
void setup() {

  lcd.begin(16, 2); // Inicia o LCD com dimensões 16x2(Colunas x Linhas)
  lcd.setCursor(0, 0); // Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
  lcd.print("Douglas Mateus"); // Escreve no LCD
  lcd.setCursor(0, 1); // Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
  lcd.print("Jose Roberto"); // Escreve no LCD 
 
}
 
void loop() {

  lcd.setCursor(13, 1); // Posiciona o cursor na décima quarta coluna(13) e na segunda linha(1) do LCD
  lcd.print(temp); // Escreve o valor atual da variável de contagem no LCD
  delay(1000); // Aguarda 1 segundo

  temp++; // Incrementa variável de contagem
 
  if(temp == 600) { // Se a variável temp chegar em 600(10 Minutos),...
    temp = 0; // Zera a variável de contagem
  }

}
