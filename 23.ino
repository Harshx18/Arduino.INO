void setup()
{
  Serial.begin(9600);
  int x = 10;
  int *y = &x;
  Serial.println(x);
  Serial.println((uint16_t)&x);
  Serial.println((uint16_t)y);
  Serial.println(*y);
  Serial.println((uint16_t)&y);
}
void loop()
{
 
}