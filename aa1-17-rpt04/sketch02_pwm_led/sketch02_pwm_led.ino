int pwm=0;
int led=3;
void setup() {
}

void loop() {
  pwm=random(0,255);
  pwmLed(led,pwm);
}
void pwmLed(int led,int pwmValue){
  analogWrite(led,pwmValue);
  delay(10);
}
