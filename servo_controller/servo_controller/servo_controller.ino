#include <Servo.h>


Servo myServo;
int deg = 0;
int pwm_pin = 2;
int state = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(9);
  myServo.write(0);
  pinMode(pwm_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){
    state = Serial.read();
  }
  if(state == 'w'){
    deg++;
    myServo.write(deg);

  }
  if(state == 's'){
    deg--;
    myServo.write(deg);
  }
  delay(10);
  /*
  myServo.write(0);   // vai a 0°
  delay(1000);
  myServo.write(60);  // mezzo angolo (circa 60°)
  delay(1000);
  myServo.write(120); // massimo (circa 120°)
  delay(1000);
  */

}
