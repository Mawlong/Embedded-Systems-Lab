int a = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(a,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int readA = analogRead(a);
  if(readA>500)
  {
    Serial.println("Sound Detected!");
   
    digitalWrite(13,HIGH);
  }
  else
  {
    digitalWrite(13,LOW);
    Serial.println("NO SOUND!");
  }
}
