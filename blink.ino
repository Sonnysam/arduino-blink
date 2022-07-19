long duration;
int distance;
int trigPin = 3;
int echoPin = 2;
void setup(){
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
 }
void loop(){
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  distance=(duration*0.034/2);
  Serial.print("Distance : ");
  Serial.print(distance);
  Serial.println(" cm ");
  delay(1000);
               
}