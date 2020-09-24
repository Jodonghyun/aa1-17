int pinNum=13;
void setup() {
  pinMode(pinNum,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(pinNum,HIGH);
 delay(3000);
 digitalWrite(pinNum,LOW);
 delay(3000);
}
