//int LED  = 7;
int SWITCH = 8;


void setup() {
  // put your setup code here, to run once:

  //pinMode(LED,OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(SWITCH,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int readValue;
  readValue = digitalRead(SWITCH);
  Serial.println(readValue);
  
   if(readValue == LOW)
   {
      digitalWrite(LED_BUILTIN,LOW);
   }
   if(readValue == HIGH)
   {
    digitalWrite(LED_BUILTIN, HIGH);
   }

}
