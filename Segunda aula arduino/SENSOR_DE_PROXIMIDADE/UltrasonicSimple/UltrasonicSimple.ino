#include <LiquidCrystal.h>
#include <Ultrasonic.h>
#define luz_fundo 7

int led1 = 6; //Azul
int led2 = 9;
int led3 = 10; //Vermelho
/*
 * Pass as a parameter the trigger and echo pin, respectively,
 * or only the signal pin (for sensors 3 pins), like:
 * Ultrasonic ultrasonic(13);
 */
Ultrasonic ultrasonic(A5, A4);
int distance;
LiquidCrystal lcd(12,11,5,4,3,2);
#define COMMON_ANODE 
void setup() {
  lcd.begin(16,2);
  pinMode(luz_fundo,OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  digitalWrite(luz_fundo,HIGH);
  Serial.begin(9600);
}

void loop() {
  // Pass INC as a parameter to get the distance in inches
  distance = ultrasonic.read();
  unsigned long tempo =0;
  Serial.print("Distance in CM: ");
  Serial.println(distance);
  delay(1000);

  setColor(255, 0, 0); //Vermelho
   lcd.clear();
   lcd.setCursor(0,0);
   
  lcd.print("Pare");
  tempo = millis();
  do{
    distance = ultrasonic.read();
    Serial.print("Distance in CM: ");
    Serial.println(distance);
    
    if(distance< 5){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("SE AFASTE");
   }
   else{
     lcd.clear();
    lcd.setCursor(0,0);
   
    lcd.print("Pare");
   }
  }while((millis()-tempo)<5000);
  
   //INTERVALO DE 1 SEGUNDO
  setColor(0, 255, 0); //PARÂMETROS PARA PRODUZIR A COR VERDE
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Prossiga");
  tempo = millis();
  do{
    distance = ultrasonic.read();
    Serial.print("Distance in CM: ");
    Serial.println(distance);
    
    if(distance< 5){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Adeus");
   }
   else{
     lcd.clear();
    lcd.setCursor(0,0);
   
    lcd.print("Prossiga");
   }
  }while((millis()-tempo)<5000);
  
  setColor(255, 255, 0); //PARÂMETROS PARA PRODUZIR A COR AMARELA
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Espere");
   tempo = millis();
  do{
    distance = ultrasonic.read();
    Serial.print("Distance in CM: ");
    Serial.println(distance);
    
    if(distance< 5){
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("TOME CUIDADO");
   }
   else{
     lcd.clear();
    lcd.setCursor(0,0);
   
    lcd.print("Espere");
   }
  }while((millis()-tempo)<5000);
  
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
