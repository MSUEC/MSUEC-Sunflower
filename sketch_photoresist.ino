void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A1, INPUT);
  pinMode(2, INPUT);

  pinMode(A0, INPUT);
  pinMode(3, INPUT);
}

void loop() {
  Serial.print(analogRead(A1));
  Serial.print(" R==> ");
  Serial.print(digitalRead(2));
  Serial.print(" :: ");
  Serial.print(analogRead(A0));
  Serial.print(" L==> ");
  Serial.println(digitalRead(3));
  delay(200);
}
