//Ultrasonic_sensor
// Define the pins for the ultrasonic sensor
const int trigPin = 7; // Trigger pin
const int echoPin = 10; // Echo pin

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(trigPin, OUTPUT); // Set trigger pin as an OUTPUT
  pinMode(echoPin, INPUT); // Set echo pin as an INPUT
}

void loop() {
  // Clear the trigger pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Send a 10 microsecond pulse to trigger the sensor
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the pulse duration from the echo pin
  long duration = pulseIn(echoPin, HIGH);

  // Calculate the distance in centimeters
  // (Speed of sound is approximately 343 meters per second)
  float distance_cm = duration / 58.2;

  // Print the distance to the serial monitor
  Serial.print("Distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");

  delay(500); // Wait for a moment before taking another reading
}
