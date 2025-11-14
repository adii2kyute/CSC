#include <Arduino.h>
#include <MeMCore.h>
MeRGBLed led(0,30); 
MeDCMotor motor1(M1);
MeDCMotor motor2(M2);

void right(){
  motor1.run(1000);
  motor2.run(0);
}
void left(){
  motor1.run(0);
  motor2.run(-1000);
}
void round1(){
  motor1.run(100);
  motor2.run(0);
}
void round2(){
  motor1.run(0);
  motor2.run(-100);


}
void green() {
  led.setpin(13);

     pinMode(A7,INPUT);
 led.setColor(0,255,0); // Set both Led to green
 led.show(); 
 delay(500);
 }
 void red() {
  led.setpin(13);

     pinMode(A7,INPUT);

 led.setColor(255,0,0); // Set LED to Red
 led.show();
 delay (500);
}
void forward(){
  green();
  motor1.run(100); // Can be an int from -255 to 255
  motor2.run(-100);
}
void stop(){
  motor1.stop();
  motor2.stop();
  red();
}
void setup() {
  round1();
  delay(2000);
  stop();




 
}

void loop() {

  // put your main code here, to run repeatedly:

}