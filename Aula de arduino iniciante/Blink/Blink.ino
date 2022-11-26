int ledAmarelo = 13;
int ledVerde = 12;
int ledVermelho = 11;
int ledPVerde = 8;
int ledPVermelho = 9;
int botao = 7;
int estadoBotao = 0;
int estadoBotao2 = 0;


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledPVerde, OUTPUT);
  pinMode(ledPVermelho, OUTPUT);
  pinMode(botao, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  estadoBotao = digitalRead(botao);
  if(estadoBotao == HIGH){
    digitalWrite(ledVerde, HIGH);  
    digitalWrite(ledPVermelho, HIGH);
    delay(2000);                       
    digitalWrite(ledVerde, LOW);    
    digitalWrite(ledPVermelho, LOW);
    digitalWrite(ledAmarelo, HIGH);   
     
    delay(2000);                       
    digitalWrite(ledAmarelo, LOW);    
          
    digitalWrite(ledVermelho, HIGH);   
    digitalWrite(ledPVerde, HIGH);
    delay(2000);
    digitalWrite(ledPVerde, LOW);                       
    digitalWrite(ledVermelho, LOW); 
    
    }
    
  
  
    
       
}
