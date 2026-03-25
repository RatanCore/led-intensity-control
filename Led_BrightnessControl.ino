

const int potPin = A0;      // Potentiometer middle pin
const int ledPin = 9;       // PWM pin (connected to 220Ω resistor + longer leg of LED)

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);       // Open Serial Monitor to see values
  Serial.println("LED Brightness Control Started");
}

void loop() {
  int potValue = analogRead(potPin);     // Read potentiometer (0 to 1023)
  
  int brightness = potValue / 4;         // Convert to 0-255 for PWM
  
  analogWrite(ledPin, brightness);       // Change LED brightness
  
  // Show values on Serial Monitor (very helpful for debugging)
  Serial.print("Pot Value: ");
  Serial.print(potValue);
  Serial.print("  |  Brightness: ");
  Serial.println(brightness);
  
  delay(50);   // Small delay for smooth control
}