void setup() 
{  
  pinMode(4, OUTPUT);
  pinMode(5, INPUT);
}
void loop() 
{  
  while(digitalRead(5) == LOW)
  {    
    digitalWrite(4, LOW);
  }
  digitalWrite(4, HIGH);
  delay(1000);
}
