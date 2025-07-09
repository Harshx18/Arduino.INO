#define RED_LED 12
#define YELLOW_LED 13
#define BUTTON 2
void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(BUTTON), control_led, CHANGE);
}
void loop() {
  digitalWrite(YELLOW_LED, HIGH);
  delay(1000);
  digitalWrite(YELLOW_LED, LOW);
  delay(1000);
}
void control_led()
{
  int button_state = digitalRead(BUTTON);
  if (button_state == LOW)
  {
    digitalWrite(RED_LED, HIGH);
  }
  else 
  {
    digitalWrite(RED_LED, LOW);
  }
}