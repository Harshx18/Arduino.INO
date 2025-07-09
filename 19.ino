void setup()
{
  Serial.begin(9600);
}
int addNumbers(int val1 , int val2)
{
  int sum = val1+ val2;
  return sum;
}
void loop() 
{
delay(1000);
int addedvalue =addNumbers(4,5);
Serial.print(" Addition is ");
Serial.println(addedvalue);
}
