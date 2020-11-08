// Du är en pruttkorv, en riktig pruttkorv!

void setup() {
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

}

void loop() {
  for (int i = 6; i <= 9; i++){
    digitalWrite(i, HIGH);
    delay(1000);
    digitalWrite(i, LOW);
  }

}
