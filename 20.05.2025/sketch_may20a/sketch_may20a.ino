int ledPin = 2;     
int buzzerPin = 3;   
void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}
void loop() 
{
  digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, LOW);
  delay(2000);  
  digitalWrite(ledPin, LOW);
  delay(2000); 
   digitalWrite(buzzerPin, HIGH);
   delay(1000);
}

 
