#include "NonBlockingDelay.hpp"

/**
 * @brief Default constructor. Initializes the delay object with a default interval of 1000 milliseconds.
 */
NonBlockingDelay::NonBlockingDelay() : _interval(1000), _previousMillis(0) {}

/**
 * @brief Constructor with specific interval. Initializes the delay object with the provided interval.
 * @param interval The duration of the delay in milliseconds.
 */
NonBlockingDelay::NonBlockingDelay(unsigned long interval) : _interval(interval), _previousMillis(0) {}

/**
 * @brief Sets or updates the delay interval.
 *       This function allows changing the duration of the non-blocking delay.
 * @param interval The duration of the delay in milliseconds.
 */
void NonBlockingDelay::setInterval(unsigned long interval)
{
    _interval = interval;
}

/**
 * @brief Resets the delay timer. This function restarts the delay countdown from the moment it's called.
 *       It should be used when you want to start the delay again.
 */
void NonBlockingDelay::reset()
{
    _previousMillis = millis();
}

/**
 * @brief Checks if the delay interval has elapsed.
 *       This function should be called repeatedly in a loop. It returns true when the specified interval has passed.
 * @return Returns true if the interval has elapsed since the last reset or successful check, false otherwise.
 */
bool NonBlockingDelay::check()
{
    unsigned long currentMillis = millis();
    if (currentMillis - _previousMillis >= _interval)
    {
        _previousMillis = currentMillis;
        return true;
    }
    else
    {
        return false;
    }
}
