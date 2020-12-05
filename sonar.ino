#include <Servo.h> // Includes the Servo library so we can control our servomotor

const int trigPin = 2; // Defines our Trig pin
const int echoPin = 3; // Defines our Echo pin

// Creates variables for duration and distance
long duration;
int distance;

Servo myServo; // Creates a servo object for controlling the servo motor

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Sets the data rate in bits per second (baud) for serial data transmission
  myServo.attach(9); // Defines on which pin is the servo motor attached
}

void loop() {

  // rotates the servo motor from 15 to 165 degrees
  for (int i = 15; i <= 165; i++) {
    myServo.write(i); // Rotates to the angle i
    delay(30); // Waits 30 ms
    distance = calculateDistance();// Calls a function for calculating the distance measured by the Ultrasonic sensor for each degree

    // Sends the angle and the distance
    Serial.print(i);
    Serial.print(",");
    Serial.print(distance);
    Serial.print(".");
  }

  // Same for 165 to 15 degrees
  for (int i = 165; i > 15; i--) {
    myServo.write(i);
    delay(30);
    distance = calculateDistance();

    Serial.print(i);
    Serial.print(",");
    Serial.print(distance);
    Serial.print(".");
  }
}

// Function for calculating the distance measured by the Ultrasonic sensor
int calculateDistance() {

  digitalWrite(trigPin, LOW); // Sets the trigPin on LOW state before sending a high-frequency sound
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); // Sets the trigPin on HIGH state to send a high-frequency sound for 10 micro seconds
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW); // Sets the trigPin on LOW state after sending a high-frequency sound
  duration = pulseIn(echoPin, HIGH); // Reads the echoPin, returns the sound wave travel time in microseconds
  distance = (duration / 2) / 29.1; // Calcultes the distance in centimeter
  return distance;
}
