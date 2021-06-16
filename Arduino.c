#include <Servo.h> 
int state = 0;
Servo Servo1;
Servo Servo2; 
Servo Servo3;
Servo Servo4;
Servo Servo5;
Servo Servo6;
void setup() {
  Servo1.write(90);
  Servo2.write(90);
  Servo3.write(90);
  Servo4.write(90);
  Servo5.write(90);
  Servo6.write(90);
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
  
  
  
  
  
}
void loop() {
  if(Serial.available() > 0){ // Checks whether data is comming from the serial port
    state = Serial.read(); // Reads the data from the serial port
    printf("aa");
     if (state == 16) {
  Servo1.write(360); 
  
  delay(1000); 
  Serial.println("LED: OFF"); // Send back, to the phone, the String "LED: ON"
  state = 0;
 }
 else if (state == 17) {
  Servo1.write(0); 
  delay(1000); 
  Serial.println("LED: ON");
  state = 0;
 } 
 else if (state == 18) {
  Servo2.write(360); 
  delay(1000); 
  Serial.println("LED: ON");
  state = 0;
 }
 else if (state == 19) {
  Servo2.write(0); 
  delay(1000); 
  Serial.println("LED: ON");
  state = 0;
 }
 else if (state == 20) {
  Servo3.write(360); 
  delay(1000); 
  Serial.println("LED: ON");
  state = 0;
 } 
 else if (state == 21) {
  Servo3.write(0); 
  delay(1000); 
  Serial.println("LED: ON");
  state = 0;
 } 
 else if (state == 22) {
  Servo4.write(360); 
  delay(1000); 
  Serial.println("LED: ON");
  state = 0;
 } 
 else if (state == 23) {
  Servo4.write(0); 
  delay(1000); 
  Serial.println("LED: ON");
  state = 0;
 }   
 else if (state == 24) {
  Servo5.write(360); 
  delay(1000); 
  Serial.println("LED: ON");
  state = 0;
 } 
 else if (state == 25) {
  Servo5.write(0); 
  delay(1000); 
  Serial.println("LED: ON");
  state = 0;
 } 
 else if (state == 26) {
  Servo6.write(360); 
  delay(1000); 
  Serial.println("LED: ON");
  state = 0;
 } 
 else if (state == 27) {
  Servo6.write(0); 
  delay(1000); 
  Serial.println("LED: ON");
  state = 0;
 } 
}
  
}
