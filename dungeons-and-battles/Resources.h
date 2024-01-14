#pragma once

#include <iostream>

/// <summary>
/// Generate a random number.
/// </summary>
/// <param name="min">Minimum value.</param>
/// <param name="max">Maximum value.</param>
/// <returns>A random integer between `min` and `max` numbers</returns>
int generateRandomNumber(int min, int max) {
    return min + std::rand() % (max - min + 1);
}