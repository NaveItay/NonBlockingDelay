#include <NonBlockingDelay.hpp>

NonBlockingDelay delay(1000); // Non-blocking delay of 1000 milliseconds

void setup()
{
    // Initialize serial communication (useful in embedded systems debugging)
    Serial.begin(9600);
}

void loop()
{
    // Non-blocking check to see if 1 second has passed
    if (delay.check())
    {
        Serial.println("1 second has passed.");
    }
}
