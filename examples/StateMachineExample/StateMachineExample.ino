#include <NonBlockingDelay.hpp>

// Define states for the state machine
enum State
{
    IDLE,
    PROCESSING,
    COMPLETED
};

State currentState = IDLE;         // Start in the IDLE state
NonBlockingDelay stateDelay(2000); // Non-blocking delay object, default 2000 ms

void setup()
{
}

void loop()
{
    switch (currentState)
    {
    case IDLE:

        // Simulate condition to start processing
        if (stateDelay.check())
        {
            currentState = PROCESSING;
            stateDelay.setInterval(5000); // Set 5-second delay for the PROCESSING state
            stateDelay.reset();
        }
        break;

    case PROCESSING:

        // Simulate the processing duration
        if (stateDelay.check())
        {
            currentState = COMPLETED;
            stateDelay.setInterval(3000); // Set 3-second delay for the COMPLETED state
            stateDelay.reset();
        }
        break;

    case COMPLETED:

        // Simulate staying in the COMPLETED state for a duration
        if (stateDelay.check())
        {
            currentState = IDLE;
            stateDelay.setInterval(2000); // Set 2-second delay for the IDLE state
            stateDelay.reset();
        }
        break;
    }
}
