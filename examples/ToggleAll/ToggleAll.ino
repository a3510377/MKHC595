#include <Arduino.h>
#include <MKHC595.h>

// Define the pins connected to the shift register
const uint8_t dataPin = 2;
const uint8_t latchPin = 3;
const uint8_t clockPin = 4;

// Create an instance of MKHC595
MKHC595<1> hc595(dataPin, latchPin, clockPin);

void setup() {}

void loop() {
  // Toggle all ports
  hc595.toggleAll();
  delay(1000);  // Delay for 1 second
}
