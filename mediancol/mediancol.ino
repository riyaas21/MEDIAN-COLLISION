// Define constants for sensor pins and threshold values
const int LEFT_SENSOR_PIN = A0;
const int RIGHT_SENSOR_PIN = A1;
const int THRESHOLD = 400;

// Define variables for sensor readings and median status
int leftReading, rightReading;
boolean medianDetected = false;

void setup() {
  // Initialize serial communication at 9600 baud
  Serial.begin(9600);
}

void loop() {
  // Read sensor values
  leftReading = analogRead(LEFT_SENSOR_PIN);
  rightReading = analogRead(RIGHT_SENSOR_PIN);

  // Check if both sensors detect a median
  if (leftReading < THRESHOLD && rightReading < THRESHOLD) {
    medianDetected = true;
  } else {
    medianDetected = false;
  }

  // Output median status
  if (medianDetected) {
    Serial.println("Median detected!");
  } else {
    Serial.println("No median detected.");
  }

  // Delay for 100ms to avoid excessive output
  delay(100);
}
