#include <Servo.h>
int MQ5 = A0;
int led_red = 6;
int led_green = 5;
int bazzer = 4;
int fan =7;
Servo myServo;
void setup() {
  myServo.attach(3); 
  pinMode(MQ5,INPUT);
  pinMode(led_red,OUTPUT);
  pinMode(led_green,OUTPUT);
  pinMode(bazzer,OUTPUT);
  pinMode(fan,OUTPUT); 
}

void loop() {
   //myServo.write(0);
 int val=analogRead(A0);
if (val > 400)
 {
  digitalWrite(fan,HIGH);
  digitalWrite(led_red,HIGH);
  delay(200);
  tone(bazzer,600,300);
  digitalWrite(led_red,LOW);
  delay(200); 
     digitalWrite(led_green,LOW);
      digitalWrite(led_red,HIGH);
  delay(200);
  tone(bazzer,600,300);
  digitalWrite(led_red,LOW);
  delay(200); 
  myServo.write(180);
     //delay(2000);
   //  myServo.write(90);
}
/*if (val >= 200)
 {
  digitalWrite(fan,HIGH); 
   myServo.write(180);
     delay(2000);
     myServo.write(0); 
}*/
else {
  digitalWrite(led_red,LOW);
  digitalWrite(led_green,HIGH);
  digitalWrite(fan,LOW);
  myServo.write(0);
  }
}
