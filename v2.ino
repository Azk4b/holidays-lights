int tabDelay[2] = {50, 100};
int toggle = 0;
int mode = 0;

void setup() {

  pinMode(13, OUTPUT); //LED verte 1 comme sortie
  pinMode(12, OUTPUT); //LED jaune 1 comme sortie
  pinMode(11, OUTPUT); //LED rouge comme sortie
  pinMode(10, OUTPUT); //LED jaune 2 comme sortie
  pinMode(9, OUTPUT); //LED verte 2 comme sortie


  pinMode(A0, INPUT); //Bouton 1 sert pour enclencher le circuit
  pinMode(A1, INPUT); //Bouton 2 sert pour définir le  mode de fonctionnement


}

void loop() {
  
  while(true){
    
    delay(10);
    
    if(toggle == 0){
      
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, LOW);
      
    }
    if(mode == 0){
      
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
    
    if(mode == 1){
      
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
    
  }
  
}


int Toggle(toggle){

  toogle = (analogRead(A0) or toogle);

}
