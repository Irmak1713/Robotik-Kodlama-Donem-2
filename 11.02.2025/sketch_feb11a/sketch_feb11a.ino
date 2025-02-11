int led2 = 2; 
int led3 = 3;
int led4 = 4; 

int pot = A0; 
int potdeger; 
 
void setup() {
  
  pinMode(led2, OUTPUT); 
  pinMode(led3, OUTPUT); 
  pinMode(led4, OUTPUT); 
  pinMode(pot, INPUT); 
}
 
void loop() {
  potdeger = analogRead(pot); 
 
  if (potdeger<400){

    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }
  else if (potdeger<800){ 

    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
  }
  else if (potdeger<1023){

    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
  }
  delay(100);
 
}
