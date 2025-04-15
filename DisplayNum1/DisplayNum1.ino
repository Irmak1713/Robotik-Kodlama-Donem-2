
#include "TM1637.h"
const int CLK = 6;
const int DIO = 7;
TM1637 tm1637(CLK, DIO);



void setup() {
    tm1637.init();
    tm1637.set(BRIGHTEST );//BRIGHT_TYPICAL = 2,BRIGHT_DARKEST = 0,BRIGHTEST = 7;

    float num = 1983;

 
    tm1637.displayNum(num);   
    delay(2000);


}

void loop() {
 tm1637.displayStr("27-11-2008-20-04-2009"); 
   
    delay(2000);
  tm1637.displayStr("fatma irmak - sude unver");
    delay(2000);
     tm1637.displayStr("dolar;38-EURO=41.57");
delay(2000);
    
  
 for (int i =10;i>0;i=i-1){
tm1637.displayNum(i);
delay(1000);
 }


 
 
}
