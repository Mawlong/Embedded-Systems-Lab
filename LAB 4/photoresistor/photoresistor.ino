int d3 = 3;
int a = A0;


void setup() {
  // put your setup code here, to run once:
  pinMode(d3,INPUT);
  pinMode(a,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Digital pin: ");
  Serial.println(digitalRead(d3));
  Serial.print("Analog pin: ");
  Serial.println(analogRead(a));
  delay(2000);
  Serial.println("\n");

}
