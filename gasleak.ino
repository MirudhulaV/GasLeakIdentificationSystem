#include <Servo.h>

#define gasSensor A0
#define fanPin D5
#define servoPin D6

Servo windowServo;

int gasValue = 0;
int threshold = 400;

void setup() {
  Serial.begin(9600);

  pinMode(fanPin, OUTPUT);
  digitalWrite(fanPin, LOW);

  windowServo.attach(servoPin);
  windowServo.write(0);   // Window closed initially
}

void loop() {

  gasValue = analogRead(gasSensor);
  Serial.print("Gas Value: ");
  Serial.println(gasValue);

  if (gasValue > threshold) {
    
    Serial.println("Gas Leak Detected!");

    digitalWrite(fanPin, HIGH);   // Turn ON fan
    windowServo.write(90);        // Open window

  } 
  else {

    digitalWrite(fanPin, LOW);    // Turn OFF fan
    windowServo.write(0);         // Close window

  }

  delay(1000);
}
