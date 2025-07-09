#define LED1 2
#define LED2 3
void setup() 
{
  pinMode(LED1 , OUTPUT);
  pinMode(LED2 , OUTPUT);
}
void loop()
{
  blinkLED(LED1 , 500);
}
void blinkLED(int pin, int delay_value)
{
  digitalWrite(pin , HIGH);
  delay(delay_value);
  digitalWrite(pin , LOW);
  delay(delay_value);
}