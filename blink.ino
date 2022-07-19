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
   if(distance < 5 ){                   // conditional to test and turn on LED if the distance is than 5cm
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  }else{
     digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level) 
  }
  Serial.print("Distance : ");
  Serial.print(distance);
  Serial.println(" cm ");
  delay(1000);
               
}