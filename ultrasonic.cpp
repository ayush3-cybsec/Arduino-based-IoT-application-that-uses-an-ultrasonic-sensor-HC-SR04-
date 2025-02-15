#define TRIG_PIN 9  // Trig pin connected to D9
#define ECHO_PIN 10 // Echo pin connected to D10

void setup() {
    Serial.begin(9600); // Initialize serial communication
    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);
}

void loop() {
    long duration;
    float distance;

    // Send a 10-microsecond pulse to trigger the sensor
    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);

    // Read the echo time
    duration = pulseIn(ECHO_PIN, HIGH);

    // Calculate the distance in cm
    distance = (duration * 0.0343) / 2;

    // Display the result on the Serial Monitor
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    delay(500); // Wait before the next measurement
}
