#include <Servo.h> 

char receivedChar;
boolean newData = false;

Servo myservo; 

void setup() {

  Serial.begin(9600);

  
}

void loop() {

  recvInfo();
  servoControl();
  
}

void recvInfo() {

  if (Serial.available() > 0) {

    receivedChar = Serial.read();
    newData = true;
    
  }
  
}

void servoControl() {

  println(receivedChar);

  /*int led = (receivedChar - '0');

  while(newData == true) {

    digitalWrite(led, HIGH);
    delay(2000);
    digitalWrite(led, LOW);

    newData = false;
    
  }*/
}
