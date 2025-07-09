void setup()
{
pinMode(12, OUTPUT);
}
void loop() 
{
digitalWrite(12, HIGH);
delayMicroseconds(10);
digitalWrite(12, LOW);
delayMicroseconds(1000);
}
