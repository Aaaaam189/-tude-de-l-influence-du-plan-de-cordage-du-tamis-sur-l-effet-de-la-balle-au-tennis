// Define the pins for the HC-SR04
const int trigPin = 9; // Trig pin connected to Arduino digital pin 9
const int echoPin = 10; // Echo pin connected to Arduino digital pin 10

// Variables to store the distance measurement
long duration;
int distance_mm; // Distance in millimeters

void setup() {
  Serial.begin(9600); // Start serial communication at 9600 baud rate
  pinMode(trigPin, OUTPUT); // Set trig pin as an output
  pinMode(echoPin, INPUT); // Set echo pin as an input
}

void loop() {
  // Clear the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Set the trigPin on HIGH state for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echoPin, and calculate the duration of the sound wave travel
  duration = pulseIn(echoPin, HIGH);

  // Calculate the distance (in millimeters) based on the speed of sound
  distance_mm = duration * 0.34 / 2;

  // Print the distance to the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance_mm);
  Serial.println(" mm");

  // Wait for a short time before taking the next measurement
  delay(60000);
}





