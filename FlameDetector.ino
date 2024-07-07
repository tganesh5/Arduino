//@Author Digilabs Inc
const int flameSensorPin = 2;  // Define the pin for the flame sensor
const int ledPin = 13;         // Define the pin for the LED

void setup() {
  pinMode(flameSensorPin, INPUT);  // Set the flame sensor pin as input
  pinMode(ledPin, OUTPUT);         // Set the LED pin as output
  Serial.begin(9600);              // Initialize serial communication at 9600 baud rate
}

void loop() {
  int flameState = digitalRead(flameSensorPin);  // Read the state of the flame sensor

  if (flameState == HIGH) {  // If flame is detected
    digitalWrite(ledPin, HIGH);  // Turn on the LED
    Serial.println("Flame detected!");
  } else {  // If no flame is detected
    digitalWrite(ledPin, LOW);  // Turn off the LED
    Serial.println("No flame detected.");
  }

  delay(500);  // Wait for 500 milliseconds
}
