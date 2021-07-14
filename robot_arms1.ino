// C++ code

#include <Servo.h>

Servo m1,m2,m3,m4,m5,m6;

void setup()
{
  Serial.begin(9600);
  m1.attach(11);
  m2.attach(10);
  m3.attach(9);
  m4.attach(6);
  m5.attach(5);
  m6.attach(3);

}

void loop()
{
  while (true){
    
  //Position one
  m1.write(10);
  m2.write(20);
  m3.write(30);
  m4.write(25);
  m5.write(15);
  m6.write(5);
  delay(1000);
  
  //Position one
  m1.write(20);
  m2.write(30);
  m3.write(40);
  m4.write(35);
  m5.write(25);
  m6.write(15);
  delay(1000);
  
  //Position one
  m1.write(30);
  m2.write(40);
  m3.write(50);
  m4.write(45);
  m5.write(35);
  m6.write(25);
  delay(1000);
  }
 
}