void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  for (int val = 0; val <=255; val++) {
    analogWrite(9,val);
    delay(1);

  }
  for (int val = 255; val >=0; val--) {
    analogWrite(9,val);
    delay(1);
  }
}