#include <NonBlockingDelay.hpp>

NonBlockingDelay delay(1000); // Non-blocking delay of 1000 milliseconds

void setup()
{
    Serial.begin(9600); // Initialize serial communication

    void loop()
    {
        // Non-blocking check to see if 1 second has passed
        if (delay.check())
        {
            Serial.println("1 second has passed.");
        }
    }
}
