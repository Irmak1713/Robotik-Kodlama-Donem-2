int Red=3;
int Green=5;
int Blue=6;
void setup() 
{
 pinMode(Red,OUTPUT);
 pinMode(Green,OUTPUT);
 pinMode(Blue,OUTPUT);
}

void loop() 
{
int i;
for(i=0;i<=255;i++)
{
  analogWrite(Red,(255-i));
  analogWrite(Green,i);
  delay(10);
}
for(i=0; i<=255;i++)
{
  analogWrite(Green,(255-i));
  analogWrite(Blue,i);
  delay(10);
}
for (i=0;i<=255;i++)
{
  analogWrite(Blue,(255-i));
  analogWrite(Red,i);
  delay(10);
  
}
}
