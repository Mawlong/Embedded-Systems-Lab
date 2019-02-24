int anybody = 7;

void setup() {
  pinMode(anybody, INPUT);
  Serial.begin(9600);

}

void loop() {
  Serial.println(digitalRead(anybody));
  delay(1000);
}
