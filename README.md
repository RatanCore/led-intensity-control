
# Arduino LED Brightness Control with Potentiometer

## Project Description
A simple beginner Arduino project where I control the brightness of an LED using a potentiometer.

**Components Used:**
- Arduino Uno
- 1kΩ Potentiometer (labeled 102)
- Red LED
- 220Ω Resistor
- Breadboard and jumper wires

**How it Works**
- Potentiometer connected to A0
- LED connected to PWM pin 9 through 220Ω resistor
- Uses `analogRead()` and `analogWrite()` for smooth brightness control

## Code
```cpp

const int potPin = A0;
const int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(potPin);
  int brightness = potValue / 4;
  analogWrite(ledPin, brightness);
  
  Serial.print("Pot: "); Serial.print(potValue);
  Serial.print(" | Brightness: "); Serial.println(brightness);
  delay(50);
}
