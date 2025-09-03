void setup() {
  pinMode(13, OUTPUT);

}

int stato = LOW;

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, stato);
  delay(100);
  stato = !stato;

}
