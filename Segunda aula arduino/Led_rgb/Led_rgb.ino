#include <LiquidCrystal.h>
#define luz_fundo 7

int led1 = 6; //Azul
int led2 = 9;
int led3 = 10; //Vermelho
LiquidCrystal lcd(12,11,5,4,3,2);
#define COMMON_ANODE 
void setup() {
  lcd.begin(16,2);
  pinMode(luz_fundo,OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  digitalWrite(luz_fundo,HIGH);
  // put your setup code here, to run once:

}

void loop() {
 
   setColor(255, 0, 0); //PARÂMETROS PARA PRODUZIR A COR VERMELHA
   lcd.clear();
   lcd.setCursor(0,0);
  lcd.print("Vermelho");
  delay(1000); //INTERVALO DE 1 SEGUNDO
  setColor(0, 255, 0); //PARÂMETROS PARA PRODUZIR A COR VERDE
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Verde");
  delay(1000); //INTERVALO DE 1 SEGUNDO
  setColor(0, 0, 255); //PARÂMETROS PARA PRODUZIR A COR AZUL
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Azul");
  delay(1000);//INTERVALO DE 1 SEGUNDO
  setColor(255, 255, 0); //PARÂMETROS PARA PRODUZIR A COR AMARELA
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Amarelo");
  delay(1000); //INTERVALO DE 1 SEGUNDO
  setColor(80, 0, 80); //PARÂMETROS PARA PRODUZIR A COR VIOLETA
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Violeta");
  delay(1000); //INTERVALO DE 1 SEGUNDO
  setColor(0, 255, 255); //PARÂMETROS PARA PRODUZIR A COR AZUL AQUA
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Aqua");
  delay(1000); //INTERVALO DE 1 SEGUNDO

  //lcd.print(millis()/1000);
}
void setColor(int vermelho, int verde, int azul){
  
 #ifdef COMMON_ANODE
    vermelho = 255 - vermelho; //VARIÁVEL RECEBE O RESULTADO DA OPERAÇÃO '255 MENOS O PARÂMETRO (vermelho) INFORMADO' NA CHAMADA DA FUNÇÃO
    verde = 255 - verde; //VARIÁVEL RECEBE O RESULTADO DA OPERAÇÃO '255 MENOS O PARÂMETRO (verde) INFORMADO' NA CHAMADA DA FUNÇÃO
    azul = 255 - azul; //VARIÁVEL RECEBE O RESULTADO DA OPERAÇÃO '255 MENOS O PARÂMETRO (azul) INFORMADO' NA CHAMADA DA FUNÇÃO
  #endif
  analogWrite(led3, vermelho); //DEFINE O BRILHO DO LED DE ACORDO COM O VALOR INFORMADO PELA VARIÁVEL 'vermelho'
  analogWrite(led2, verde); //DEFINE O BRILHO DO LED DE ACORDO COM O VALOR INFORMADO PELA VARIÁVEL 'verde'
  analogWrite(led1, azul); //DEFINE O BRILHO DO LED DE ACORDO COM O VALOR INFORMADO PELA VARIÁVEL 'azul'
}
