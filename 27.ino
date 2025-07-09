void setup()
{
pinMode(12, OUTPUT);
}
void loop() 
{
digitalWrite(12, HIGH);
delayMicroseconds(1000);
digitalWrite(12, LOW);
delayMicroseconds(10);
}
