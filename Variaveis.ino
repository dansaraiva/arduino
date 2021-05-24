int intervalo1Pisca;//LED verde
int intervalo2Pisca;//LED vermelho

void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT);
  pinMode(6,OUTPUT);

  intervalo1Pisca = 500;
  intervalo2Pisca = 500;
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(6,HIGH);
  digitalWrite(10,HIGH);
  delay(intervalo1Pisca);

  digitalWrite(6,LOW);
  digitalWrite(10,LOW);
  delay(intervalo2Pisca);  

}
