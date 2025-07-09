void setup() 
{
  Serial.begin(9600);
  String var = "Hello E&E!";
  add_subscribe(var);
}
void loop()
{

}
void add_subscribe(String var_temp) 
{
  String final_var = var_temp + " Subscribe!";
  Serial.println();
  Serial.println(final_var);
}