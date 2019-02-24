int input = A0;

void setup() {
  pinMode(input, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(input));

}
