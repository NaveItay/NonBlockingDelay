/**
 * @file
 *    NonBlockingDelay Library
 * 
 * @brief
 *    This library provides non-blocking delay functionality for Arduino projects, allowing for timed operations
 *    without halting other processes. It is particularly useful in scenarios where maintaining program flow is
 *    essential while waiting for a certain period.
 *
 *    The `NonBlockingDelay` class enables easy setup and checking of delays, facilitating time-based tasks without
 *    the constraints of traditional blocking delay functions.
 *
 * Usage:
 *    1. Create an instance of the `NonBlockingDelay` class.
 *    2. Use the `check()` method to determine if the set interval has elapsed.
 *    3. Execute code after the interval has passed, as indicated by `check()`.
 *
 * Example:
 *    NonBlockingDelay delay(1000); // 1000 milliseconds delay
 *    if (delay.check()) {
 *      // Code to execute after 1 second
 *    }
 *
 * @author
 *    Itay Nave, Embedded Software Engineer
 * @date
 *    12/25/2023
 *
 * @copyright
 *    © 2023 Itay Nave. All rights reserved.
 *    This software is provided "as is", without warranty of any kind, express or implied. 
 *    Redistribution and use in source and binary forms, with or without modification, 
 *    are permitted provided that the above copyright notice and this permission notice 
 *    appear in all copies.
 */

#pragma once

#include <Arduino.h>

class NonBlockingDelay
{
public:
  NonBlockingDelay();                       // Default constructor with 1000 ms
  NonBlockingDelay(unsigned long interval); // Constructor with specific interval
  void setInterval(unsigned long interval);
  void reset();
  bool check();

private:
  unsigned long _interval;
  unsigned long _previousMillis;
};
