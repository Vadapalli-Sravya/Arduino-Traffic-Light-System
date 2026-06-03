int redLed=13;
int yellowLed=12;
int greenLed=11;
void setup() {
  // put your setup code here, to run once:
  pinMode(redLed,OUTPUT);
  pinMode(yellowLed,OUTPUT);
  pinMode(greenLed,OUTPUT);
}

void loop() {
  // Red LED ON
    digitalWrite(redLed,HIGH);
    digitalWrite(yellowLed,LOW);
    digitalWrite(greenLed,LOW);
    
    delay(5000);

  // Yellow LED ON
    digitalWrite(redLed,LOW);
    digitalWrite(yellowLed,HIGH);
    digitalWrite(greenLed,LOW);
    
    delay(2000);

  //Green LED ON
    digitalWrite(redLed,LOW);
    digitalWrite(yellowLed,LOW);
    digitalWrite(greenLed,HIGH);
    
    delay(5000);
}