int pinLed[9] = {13, 12, 11, 10, 9, 8, 7, 6, 5};

void setup() {
  // put your setup code here, to run once:
  int x;
  for (x = 0;x < 9; x = x +1){
    pinMode(pinLed[x], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  int numeroLed;
  for (numeroLed = 0; numeroLed < 9; numeroLed = numeroLed + 3){
    digitalWrite(pinLed[numeroLed], HIGH);
    delay(300);
  }
   for (numeroLed = 8; numeroLed >= 0 ; numeroLed = numeroLed - 1){
    digitalWrite(pinLed[numeroLed], LOW);
    delay(300);
  }
  
}
