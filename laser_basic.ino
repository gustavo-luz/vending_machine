int laserPin = 10;
int sensorPin=A0;
int sensorValue=0; 

int piezoPin=9; 

void setup ()
{
  pinMode(sensorPin,INPUT); 

  pinMode(piezoPin,OUTPUT); 

  pinMode(laserPin, OUTPUT);
}

void loop () {
  digitalWrite(laserPin, HIGH);
  delay(1000);
 //uncomment to turn laser off
 // digitalWrite(laserPin, LOW);
  //delay(1000);
  sensorValue=analogRead(sensorPin); 

  if(sensorValue<=1000) 

  {

  digitalWrite(piezoPin,LOW); 

  {tone(9,3047,400); noTone(8); } 


  }

  else { 

  digitalWrite(piezoPin,HIGH); 


  } 

sensorValue=1000; 
}
