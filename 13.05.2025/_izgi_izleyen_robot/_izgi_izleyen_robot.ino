/* 
 * Lezzetli Robot Tarifleri - Arduino Haber 
 * Arduino Projeleri
 * Çizgi İzleyen Robot V1.00
 * VİDEO >>> https://lezzetlirobottarifleri.com/arduino-ile-cizgi-izleyen-robot-v1-00-3-bolum
*/

const int sag_i = 4;
const int sag_g = 5;
const int sol_i = 7;
const int sol_g = 6;
const int sol_sensor = 2;
const int sag_sensor = 3;
int sol_durum, sag_durum;

void setup()
 {
  pinMode(sag_i, OUTPUT);
  pinMode(sag_g, OUTPUT);
  pinMode(sol_i, OUTPUT);
  pinMode(sol_g, OUTPUT);
  pinMode(sag_sensor, INPUT);
  pinMode(sol_sensor, INPUT);
 
}

void loop() 
{
  sol_durum = digitalRead(sol_sensor);
  sag_durum = digitalRead(sag_sensor);


  if (sol_durum == LOW && sag_durum == LOW) // ileri
  {
    digitalWrite(sag_i, HIGH);
    digitalWrite(sag_g, LOW);
    digitalWrite(sol_i, HIGH);
    digitalWrite(sol_g, LOW);
  }
  else if (sol_durum == LOW && sag_durum == HIGH) // sağa
  {
    digitalWrite(sag_i, HIGH);
    digitalWrite(sag_g, HIGH);
    digitalWrite(sol_i, HIGH);
    digitalWrite(sol_g, LOW);
  }
  else if (sol_durum == HIGH && sag_durum == LOW) // sola
  {
    digitalWrite(sag_i, HIGH);
    digitalWrite(sag_g, LOW);
    digitalWrite(sol_i, HIGH);
    digitalWrite(sol_g, HIGH);
  }
  else
  {
    digitalWrite(sag_i, LOW);
    digitalWrite(sag_g, LOW);
    digitalWrite(sol_i, LOW);
    digitalWrite(sol_g, LOW);
  }
  delay(25);
  digitalWrite(sag_i, LOW);
  digitalWrite(sag_g, LOW);
  digitalWrite(sol_i, LOW);
  digitalWrite(sol_g, LOW);
  delay(50); 
}
