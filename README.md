# NonBlockingDelay Library for Embedded Systems

The **NonBlockingDelay** library provides non-blocking delay functionality for embedded systems, enabling timed operations without halting program flow.

### Features:
- **Non-blocking delays**: Allow execution of other tasks while waiting for timed intervals.
- **Easy integration**: Designed for embedded systems using a modern `.hpp` header structure.
- **Configurable intervals**: Set custom time intervals for delay-based operations.

### Installation:
1. Clone or download the repository.
2. Copy the `NonBlockingDelay` folder into your embedded systems project.
3. Include the `.hpp` file in your project and start using the library.

### Example: Basic Usage
This example demonstrates how to set up a simple non-blocking delay to print a message to the serial monitor every second without halting other operations.

```cpp
#include <NonBlockingDelay.hpp>

NonBlockingDelay ledDelay(500);  // 500ms delay for toggling the LED

const int ledPin = 13;           // Pin for the LED (common on embedded boards)

void setup() {
  pinMode(ledPin, OUTPUT);       // Set the LED pin as output
}

void loop() {
  if (ledDelay.check()) {
    // Toggle the LED state every 500 milliseconds
    digitalWrite(ledPin, !digitalRead(ledPin));
  }
}
