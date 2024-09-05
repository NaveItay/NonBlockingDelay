# NonBlockingDelay Library for Embedded Systems

The **NonBlockingDelay** library provides non-blocking delay functionality for embedded systems, enabling timed operations without interrupting the program flow.

### Features:
- **Non-blocking delays**: Allow execution of other tasks while waiting for timed intervals.
- **Easy integration**: Designed for embedded systems using a modern `.hpp` header structure.
- **Configurable intervals**: Set custom time intervals for delay-based operations.

### Installation:
1. Clone or download the repository.
2. Copy the `NonBlockingDelay` folder into your embedded systems project.
3. Include the `.hpp` file in your project and start using the library.

### Example:
```cpp
#include <NonBlockingDelay.hpp>

NonBlockingDelay delay(1000); // 1000ms delay

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (delay.check()) {
    Serial.println("1 second has passed.");
  }
}
