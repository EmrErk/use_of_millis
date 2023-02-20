const int led = 3;
unsigned long SimdikiZaman =0;
unsigned long OncekiZaman =0;
int aralik = 1000 ;
bool durum;
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  SimdikiZaman = millis();
  if(SimdikiZaman - OncekiZaman >= aralik){
    OncekiZaman = SimdikiZaman;
    if(durum ==  HIGH){
      durum = LOW;
    }
    else if(durum == LOW){
      durum = HIGH;
    }
    digitalWrite(led, durum);

  }

}
