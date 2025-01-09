#include <Servo.h>

// Define pin numbers
const int switchPin = 10;
const int servoPin = 11;
const int relayPin = 8;
const int irPins[] = {7, 6, 5, 4, 3, 2}; // Array for IR sensor pins

// Create a Servo object
Servo myServo;

void setup() {
  // Set the switch pin as an input
  pinMode(switchPin, INPUT);

  // Set the relay pin as an output
  pinMode(relayPin, OUTPUT);

  // Set IR sensor pins as inputs
  for (int pin : irPins) {
    pinMode(pin, INPUT);
  }

  // Attach the servo to the servo pin
  myServo.attach(servoPin);

  // Initialize the servo to the starting position (0 degrees)
  myServo.write(0);

  // Turn off the relay initially
  digitalWrite(relayPin, LOW);

  // Begin serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Read the state of the switch
  int switchState = digitalRead(switchPin);

  // Initialize brakingCondition based on the switch state
  bool brakingCondition = (switchState == HIGH);

  // Check all IR sensors
  for (int pin : irPins) {
    if (digitalRead(pin) == LOW) {
      brakingCondition = true;
      break; // Exit the loop early if any sensor triggers
    }
  }

  // Engage or disengage the braking system based on the condition
  if (brakingCondition) {
    // Rotate the servo to 90 degrees (engage braking)
    myServo.write(90);

    // Activate the relay (e.g., to cut off power to the motors)
    digitalWrite(relayPin, HIGH);

    // Print a message to the serial monitor for debugging
    Serial.println("Braking system engaged");
  } else {
    // Return the servo to 0 degrees (disengage braking)
    myServo.write(0);

    // Deactivate the relay (e.g., to allow power to the motors)
    digitalWrite(relayPin, LOW);

    // Print a message to the serial monitor for debugging
    Serial.println("Braking system disengaged");
  }

  // Add a small delay to avoid bouncing issues
  delay(100);
}