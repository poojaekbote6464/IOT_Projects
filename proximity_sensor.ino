
const int irSensorPin = A0; // Analog pin connected to the IR sensor

void setup() {
  Serial.begin(9600);
  pinMode(irSensorPin, INPUT);
}

void loop() {
  int proximityValue = analogRead(irSensorPin);

  if (proximityValue < 100) { // Adjust the threshold as needed
    Serial.println("Object detected!");
  } else {
    Serial.println("No object detected.");
  }

  delay(5000); // Delay for a moment before taking another reading
}
