//IEEE RAS
//LED + Ultrasonic

int us = 0;
const int trig=10;
const int echo=9;
const int led=13;
#define dis 25
void setup()
{
pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(led,OUTPUT);

}

void loop(){
  if(front()<dis){
    digitalWrite(led,HIGH);
  }
  else{
  	digitalWrite(led,LOW);
  }
}
long front(){
    long dur;
digitalWrite(trig, LOW); 			// dont send signal
delayMicroseconds(5); 
digitalWrite(trig, HIGH);			// send uv signal
delayMicroseconds(10); 
digitalWrite(trig, LOW);			// stop sending uv
dur = pulseIn(echo, HIGH);		//returns duration
return (dur/60);						// convert the time to dist
}
