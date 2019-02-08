int brownConfig = 8;
int redConfig = 9;
int blueIp = 2;
int purpleIp = 3;
int LED = 11;


void setup() {
  // put your setup code here, to run once:
  pinMode(brownConfig,INPUT);
  pinMode(redConfig,INPUT);
  pinMode(blueIp,INPUT);
  pinMode(purpleIp,INPUT);
  pinMode(LED,OUTPUT);

  Serial.begin(9600);
}

void loop() {

  int config1 =digitalRead(brownConfig);
  Serial.print("configuration1: ");
  Serial.println(config1);
  int config2 = digitalRead(redConfig);  
  Serial.print("configuration2: ");
  Serial.println(config2);
  
  int op1 = digitalRead(blueIp);
  Serial.print("operation1: ");
  Serial.println(op1);
  int op2 = digitalRead(purpleIp);
  Serial.print("operation2: ");
  Serial.println(op2);

  delay(2000);

  //AND operation
  if(config1 == LOW && config2 == LOW)
  {
    Serial.println("AND operation");
    if(op1 == LOW && op2 == LOW)
    {
      digitalWrite(LED, LOW); 
    }
    if(op1 == LOW && op2 == HIGH)
    {
      digitalWrite(LED, LOW); 
    }
    if(op1 == HIGH && op2 == LOW)
    {
      digitalWrite(LED, LOW); 
    }
    if(op1 == HIGH && op2 == HIGH)
    {
      digitalWrite(LED, HIGH); 
    }
  }


  //OR operation
  if(config1 == LOW && config2 == HIGH)
  {
    Serial.println("OR operation");
    if(op1 == LOW && op2 == LOW)
    {
      digitalWrite(LED, LOW); 
    }
    if(op1 == LOW && op2 == HIGH)
    {
      digitalWrite(LED, HIGH); 
    }
    if(op1 == HIGH && op2 == LOW)
    {
      digitalWrite(LED, HIGH); 
    }
    if(op1 == HIGH && op2 == HIGH)
    {
      digitalWrite(LED, HIGH); 
    }
  }

  //XOR operation
  if(config1 == HIGH && config2 == LOW)
  {
    Serial.println("XOR operation");
    if(op1 == LOW && op2 == LOW)
    {
      digitalWrite(LED, LOW); 
    }
    if(op1 == LOW && op2 == HIGH)
    {
      digitalWrite(LED, HIGH); 
    }
    if(op1 == HIGH && op2 == LOW)
    {
      digitalWrite(LED, HIGH); 
    }
    if(op1 == HIGH && op2 == HIGH)
    {
      digitalWrite(LED, LOW); 
    }
  }

  //NAND operation
  if(config1 == HIGH && config2 == HIGH)
  {
    Serial.println("NAND operation");
    if(op1 == LOW && op2 == LOW)
    {
      digitalWrite(LED, HIGH); 
    }
    if(op1 == LOW && op2 == HIGH)
    {
      digitalWrite(LED, HIGH); 
    }
    if(op1 == HIGH && op2 == LOW)
    {
      digitalWrite(LED, HIGH); 
    }
    if(op1 == HIGH && op2 == HIGH)
    {
      digitalWrite(LED, LOW); 
    }
  }
}
