int botao = 7;
int estadoBotao = 0;
int led = 13;
int pinSensor = A5;
int luminosidade;
int ledVerde = 11;
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
  luminosidade = analogRead(pinSensor);
  Serial.print("Valor= ");
  Serial.println(luminosidade);

  pwm = map(luminosidade, 300, 900, 0, 255);
  analogWrite(ledVerde, pwm);
  
     
      
    
    
    
  
  
    
       
}
