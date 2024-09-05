#include <NonBlockingDelay.hpp>

NonBlockingDelay ledDelay(500); // Non-blocking delay of 500 milliseconds
const int ledPin = 13;          // Pin number for the LED (commonly used in embedded systems)

void setup()
{
    pinMode(ledPin, OUTPUT); // Set the LED pin as output
}

void loop()
{
    if (ledDelay.check())
    {
        // Toggle the LED state every 500 milliseconds
        digitalWrite(ledPin, !digitalRead(ledPin));
    }
}
