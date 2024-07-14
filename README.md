# the  commands for servo motor:

// C++ code
//
#include <Servo.h>

int p1 = 0;

int p2 = 0;

int p3 = 0;

int p4 = 0;

int p5 = 0;

int p6 = 0;

Servo servo_8;

Servo servo_9;

Servo servo_11;

Servo servo_10;

Servo servo_7;

Servo servo_12;

void setup()
{
  servo_8.attach(8, 500, 2500);
  servo_9.attach(9, 500, 2500);
  servo_11.attach(11, 500, 2500);
  servo_10.attach(10, 500, 2500);
  servo_7.attach(7, 500, 2500);
  servo_12.attach(12, 500, 2500);
}

void loop()
{
  p1 = 0;
  for (p1 = 1; p1 <= 180; p1 += 1) {
    servo_8.write(p1);
  }
  delay(20); // Wait for 20 millisecond(s)
  for (p1 = 180; p1 >= 1; p1 -= 1) {
    servo_8.write(p1);
  }
  p2 = 0;
  for (p2 = 1; p2 <= 180; p2 += 1) {
    servo_9.write(p2);
  }
  delay(20); // Wait for 20 millisecond(s)
  for (p2 = 180; p2 >= 1; p2 -= 1) {
    servo_9.write(p2);
  }
  p3 = 0;
  for (p3 = 1; p3 <= 180; p3 += 1) {
    servo_11.write(p3);
  }
  delay(20); // Wait for 20 millisecond(s)
  for (p3 = 180; p3 >= 1; p3 -= 1) {
    servo_11.write(p3);
  }
  p4 = 0;
  for (p4 = 1; p4 <= 180; p4 += 1) {
    servo_10.write(p4);
  }
  delay(20); // Wait for 20 millisecond(s)
  for (p4 = 180; p4 >= 1; p4 -= 1) {
    servo_10.write(p4);
  }
  p5 = 0;
  for (p5 = 1; p5 <= 180; p5 += 1) {
    servo_7.write(p5);
  }
  delay(20); // Wait for 20 millisecond(s)
  for (p5 = 180; p5 >= 1; p5 -= 1) {
    servo_7.write(p5);
  }
  p6 = 0;
  for (p6 = 1; p6 <= 180; p6 += 1) {
    servo_12.write(p6); 
  }
  delay(20); // Wait for 20 millisecond(s)
  for (p6 = 180; p6 >= 1; p6 -= 1) {
    servo_12.write(p6);
  }
}
