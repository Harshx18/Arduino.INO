
void setup()
{
  Serial.begin(9600);
  pinMode(2 , OUTPUT);
}
int checkSensor()
{
  int potValue = analogRead(A0);
  Serial.println(potValue);
  if( potValue > 320)
  {
    return 1;
  }
  else
  {
    return 0;
  }  
}
void loop()
{
  digitalWrite( 2, checkSensor()); 
}


  


