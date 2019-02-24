//used to send the wave
const int trigPin = 8;
//used to receive a pulse
const int echoPin = 7;

long duration;
int distance;

void setup() {
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Serial.begin(9600); 
}
void loop() {

//Here we reset the pin to low for 2 micro seconds
// then we make it go high for 10 micro seconds 
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
//this will send a 8 cycle sonic burst
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

//pulseIn takes the input pin and checks for when it goes high.
// when high it starts the  timmer and waits for it to go low
duration = pulseIn(echoPin, HIGH);
// speed of sound = 340 m/s. we convert to cm/us and get 0.034
distance= duration*0.034/2;

Serial.print("Distance (in cm): ");
Serial.println(distance);
}
