void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int LDR = analogRead (A0);

Serial.print("A0(giriş)");
Serial.println(LDR);
if(LDR < 20)
{
  digitalWrite(3,1);
  digitalWrite(4,0);
  digitalWrite(5,0);
  
 }
   else if(LDR < 40)
  {
    digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,0);
    
    
    }
    else{
        digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,1);
      
      
      }

}
