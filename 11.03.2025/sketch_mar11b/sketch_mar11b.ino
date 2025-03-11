int r=3;
int b=5;
int g=6;
void setup()
{
   pinMode(r, OUTPUT);
   pinMode(g, OUTPUT);
   pinMode(b, OUTPUT);
}

void loop()
{
  
  
  
  int i;
  for(i=0;i<=255;i++)
  {

    analogWrite(r,(255-i));
    analogWrite(g,i);
    delay(10);
  }
    for(i=0;i<=255;i++)
  {
  
    analogWrite(g,(255-i));
    analogWrite(b,i);
       delay(10);
  }
    
    for(i=0;i<=255;i++)
  {
 
    analogWrite(b,(255-i));
    analogWrite(r,i);
       delay(10);
  }
}
