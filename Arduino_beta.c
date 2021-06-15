#include <Servo.h> 
int state = 0;
Servo Servo1;
Servo Servo2; 
Servo Servo3;
Servo Servo4;
Servo Servo5;
Servo Servo6;
int Servo1PPos=90;

void setup() {
  Servo1.attach(3);
  Servo2.attach(4);
  Servo3.attach(5);
  Servo4.attach(6);
  Servo5.attach(7);
  Servo6.attach(8);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);
  Servo1.write(Servo1PPos);
 
  
  
}
void loop() {
  if(Serial.available() > 0){ // Checks whether data is comming from the serial port
    state = Serial.read(); // Reads the data from the serial port
 while (state == 16) {
  if (Serial.available() > 0) {
        state = Serial.read();
      }
  Serial.println("123");
  Servo1.write(Servo1PPos);
  Servo1PPos+=10; 
  delay(20); 
  
  state = 0;
 }
 while (state == 17 ) {
  if (Serial.available() > 0) {
        state = Serial.read();
      }
  
  Servo1.write(Servo1PPos);
  Servo1PPos-=10; 
  delay(20); 
  
  state = 0;
 }  
}
} 


