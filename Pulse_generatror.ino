#include<TimerOne.h>
const int outpin = 10;
const int inpin = 3;
int values =0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(outpin,OUTPUT);
  pinMode(inpin,INPUT);
  Timer1.initialize(100000000);
  Timer1.pwm(outpin,500);
}

void loop() {
  // put your main code here, to run repeatedly:
  values = digitalRead(inpin);
  delay(19);
  Serial.print(values);
  Serial.println();
}
