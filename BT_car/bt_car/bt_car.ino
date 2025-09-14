/*int motor1pin1 = 2;
int motor1pin2 = 3;
int motor2pin1 = 4;
int motor2pin2 = 5;
int motor3pin1 = 6;
int motor3pin2 = 7;
*/
int right_pin1 = 2;
int right_pin2 = 3;
int left_pin1 = 4;
int left_pin2 = 5;

int state = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(right_pin1, OUTPUT);
  pinMode(right_pin2, OUTPUT);
  pinMode(left_pin1, OUTPUT);
  pinMode(left_pin2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    state = Serial.read();
    Serial.println(state);
  }
  if(state == 83){
    digitalWrite(right_pin1, LOW);
    digitalWrite(right_pin2, LOW);
    digitalWrite(left_pin1, LOW);
    digitalWrite(left_pin2, LOW);
  }
  if(state == 70){      // forward
    digitalWrite(right_pin1, HIGH);
    digitalWrite(right_pin2, LOW);
    digitalWrite(left_pin1, HIGH);
    digitalWrite(left_pin2, LOW);
  }
  if(state == 66){    // backward
    digitalWrite(right_pin1, LOW);
    digitalWrite(right_pin2, HIGH);
    digitalWrite(left_pin1, LOW);
    digitalWrite(left_pin2, HIGH);
  }
  if(state == 82){    // right
    digitalWrite(right_pin1, LOW);
    digitalWrite(right_pin2, HIGH);
    digitalWrite(left_pin1, HIGH);
    digitalWrite(left_pin2, LOW);
  }
  if(state == 76){    // left
    digitalWrite(right_pin1, HIGH);
    digitalWrite(right_pin2, LOW);
    digitalWrite(left_pin1, LOW);
    digitalWrite(left_pin2, HIGH);
  }
  

}
