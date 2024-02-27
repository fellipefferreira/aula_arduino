
int cm = 0;
int triggerPin = 7;
int echoPin = 8;
// função 
long readUltrasonicDistance(int triggerPin, int echoPin){
  pinMode(triggerPin, OUTPUT);  
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
 
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);  
  pinMode(echoPin, INPUT);
  
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600); // Numero padrao  da velocidade do arduino

}

void loop()
{
  
  cm = 0.01723 * readUltrasonicDistance(triggerPin, echoPin); // Converter para centímetros
  
  Serial.print(cm);
  Serial.println("cm");
  delay(100); 
}
