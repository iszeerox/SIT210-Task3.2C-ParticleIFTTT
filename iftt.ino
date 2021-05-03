int led1 = A5; 

int led2 = D7; 

int photoresistor = A0;
int analogValue;


void setup() {



  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(photoresistor, INPUT);

}


void loop() {
 
analogValue = analogRead(photoresistor);
String light = String(analogValue);
Particle.publish("temp", light, PRIVATE);

delay(30000);

 
}