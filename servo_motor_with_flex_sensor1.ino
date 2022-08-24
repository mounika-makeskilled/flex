#include <Servo.h>

Servo myservo;  
int flex=A0;
int minflex=990;
int maxflex=1017;
int pos=0;
void setup() {
  myservo.attach(9); 
  pinMode(flex,INPUT);
  Serial.begin(9600);
}

void loop() {
  int a=analogRead(flex);
  int b=((a-minflex)/(maxflex-minflex));
  int angle=(b*180);
  Serial.println(angle);
   myservo.write(angle);              
    delay(15);                       
 }
