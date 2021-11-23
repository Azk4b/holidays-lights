float valTrim;
int val;
int tabDelay[3] = {50, 100, 500};

void setup() {

  pinMode(13, OUTPUT); //LED verte 1 comme sortie
  pinMode(12, OUTPUT); //LED jaune 1 comme sortie
  pinMode(11, OUTPUT); //LED rouge comme sortie
  pinMode(10, OUTPUT); //LED jaune 2 comme sortie
  pinMode(9, OUTPUT); //LED verte 2 comme sortie

  
  pinMode(A0, INPUT); /*set the trimer (light frequency) pinMode to INPUT
                      0V à 4.9V max par tranche de 0.0049V soit 1024 tranche de 4.9mV*/                    

  Serial.begin(9600);
}

void loop() {
  
  while(true){
    
    val = analogRead(A0);
    valTrim = (val*4.9)/1000;
    
    Serial.println("valeur digitale obtenue après conversion de la tension = " );
    Serial.println("Tension lue =");
    Serial.println(valTrim);
    Serial.println("Volts" );
    
    delay(10);
    
    if(valTrim == 0){
      
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, LOW);
      
    }
    if(0 < valTrim <= 3.8){
      
      digitalWrite(13, HIGH);
      delay(tabDelay[0]);
      digitalWrite(13, LOW);
      
      digitalWrite(12, HIGH);
      delay(tabDelay[0]);
      digitalWrite(12, LOW);
      
      digitalWrite(11, HIGH);
      delay(tabDelay[0]);
      digitalWrite(11, LOW);
      
      digitalWrite(10, HIGH);
      delay(tabDelay[0]);
      digitalWrite(10, LOW);
      
      digitalWrite(9, HIGH);
      delay(tabDelay[0]);
      digitalWrite(9, LOW);
      
    }
    
    if(3.8 < valTrim <= 4.3){
      
      digitalWrite(13, HIGH);
      delay(tabDelay[1]);
      digitalWrite(13, LOW);
      
      digitalWrite(12, HIGH);
      delay(tabDelay[1]);
      digitalWrite(12, LOW);
      
      digitalWrite(11, HIGH);
      delay(tabDelay[1]);
      digitalWrite(11, LOW);
      
      digitalWrite(10, HIGH);
      delay(tabDelay[1]);
      digitalWrite(10, LOW);
      
      digitalWrite(9, HIGH);
      delay(tabDelay[1]);
      digitalWrite(9, LOW);
      
    }
    
    if(4.3 < valTrim <= 5){
      digitalWrite(13, HIGH);
      delay(tabDelay[2]);
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      delay(tabDelay[2]);
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH);
      delay(tabDelay[2]);
      digitalWrite(11, LOW);
      digitalWrite(10, HIGH);
      delay(tabDelay[2]);
      digitalWrite(10, LOW);
      digitalWrite(9, HIGH);
      delay(tabDelay[2]);
      digitalWrite(9, LOW);
    }
    
  }
  
}
