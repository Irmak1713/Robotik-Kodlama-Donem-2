

void setup() {
 
pinMode(6,OUTPUT);
pinMode(3,OUTPUT);
pinMode(5,OUTPUT);



}

void loop() {
 for (int b = 5; b < 6 ; b++){



analogWrite(5,b);
delay(2000);


  
}
for (int b=5; b>=6; b-=10){



analogWrite(5,b);
delay(2000);


}

for (int i=6; i<=7; i+=10){



analogWrite(6,i);
delay(2000);
}
for (int i=7; i>=6; i-=10){



analogWrite(6,i);
delay(2000);


}
for (int i=3; i<=4; i+=10){



analogWrite(3,i);
delay(2000);


  
}
for (int i=4; i>=3; i-=10){



analogWrite(3,i);
delay(2000);


}

}
