
int botao = 7;
int estadoBotao = 0;
int led = 13;
int pinSensor = A5;
int valorSensor = 0;
int ledVerde = 12;
int ledBranco = 6;
int pwm;


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  
  pinMode(botao, INPUT);
  pinMode(led, OUTPUT);
   pinMode(ledVerde, OUTPUT);
  pinMode(ledBranco, OUTPUT);
  Serial.begin(9600);
 
}

// the loop function runs over and over again forever
void loop() {
  luminosidade = analogRead(pinSensor)
  valorSensor = analogRead(pinSensor);
  Serial.print("Valor do sensor= ");
  Serial.println(valorSensor);
  estadoBotao = digitalRead(botao);
  
     
      digitalWrite(led, HIGH);
      digitalWrite(ledVerde, LOW);
      digitalWrite(ledBranco, LOW);
     
     
       digitalWrite(ledVerde, HIGH);
       digitalWrite(led, LOW);
        digitalWrite(ledBranco, LOW);
     }
     else if(valorSensor<570){
      digitalWrite(ledBranco, HIGH);
       digitalWrite(led,LOW);
       digitalWrite(ledVerde, LOW);
     }
    
    
    
  
  
    
       
}
