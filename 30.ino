unsigned long currentTime = 0;
unsigned long previousTime = 0;
bool state = true;

void setup() 
{
 
  pinMode(12, OUTPUT);
}

void loop()
{
  
  currentTime = millis();
  
  if (currentTime - previousTime >= 1000) 
  {
    if (state == true) 
    {
      digitalWrite(12, HIGH);
      state = false;
    } else {
      digitalWrite(12, LOW);
      state = true;
    }
    previousTime = millis();
  }
}