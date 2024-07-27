const int trigpin = 12;
const int echopin = 13;
long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigpin, OUTPUT );
  pinMode(echopin, INPUT);
   pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
   pinMode(4, OUTPUT);
    Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  duration = pulseIn(echopin, HIGH);
  distance = duration*0.034/2;
  Serial.print("Distance : ");
  Serial.println(distance);
  if(distance<= 10){
digitalWrite(2, HIGH);
digitalWrite(3, LOW);
digitalWrite(4, LOW);

  }
  if(distance >10 && distance<=30)
  {
digitalWrite(2, LOW);
digitalWrite(3, HIGH);
digitalWrite(4, LOW);

}
else
{
  digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, HIGH);
}






    
  }
