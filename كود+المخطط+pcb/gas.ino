//BAHA MORTADHA
//Code how to make a gas leakage protection device
#include <Servo.h>
#define MQ5 A7
#define led_red  2
#define led_green  3
#define bazzer  4
#define fan 5
 Servo myServo;

void setup() {
  myServo.attach(6); //servo pin
  myServo.write(0); //servo start position
  pinMode(MQ5,INPUT);
  pinMode(led_red,OUTPUT);
  pinMode(led_green,OUTPUT);
  pinMode(bazzer,OUTPUT);
  pinMode(fan,OUTPUT);
}

void loop() {
 int val=analogRead(A0);
if (val > 200)
 {
  myServo.write(180);
  digitalWrite(fan,HIGH);
  while(val > 200){
  digitalWrite(led_red,HIGH);
  delay(200);
  tone(bazzer,600,300);
  digitalWrite(led_red,LOW);
  delay(200);} 
     /*digitalWrite(led_green,LOW);
     digitalWrite(led_red,HIGH);
  delay(200);
  tone(bazzer,600,300);
  digitalWrite(led_red,LOW);
  delay(200);*/ 
  digitalWrite(fan,LOW);
  myServo.write(0);
}
else {
  digitalWrite(led_green,HIGH);
  }
}
