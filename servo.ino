#include <Servo.h>
Servo servo;
 
int servoPin = 9; 
int ledPin = 13;    
int switchPin = 2;  
int xPin = A0;      
int yPin = A1;      
 
void setup() {

    pinMode(ledPin, OUTPUT);
    pinMode(switchPin, INPUT);
    pinMode(xPin, INPUT);
    pinMode(yPin, INPUT);
 

    servo.attach(servoPin);
 
  
   delay(1000);
 
    servo.write(90);
    for (int i = 0; i < 4; ++i) {
        digitalWrite(ledPin, HIGH);
        delay(200);
        digitalWrite(ledPin, LOW);
        delay(200);
    }
 
    Serial.begin(115200);
}
 
void loop() {
    int yVal = analogRead(yPin);
    yVal = constrain(yVal, 0, 1023);
    int angle = map(yVal, 0, 1023, 170, 20);
    servo.write(angle);
    delay(15);
} 
