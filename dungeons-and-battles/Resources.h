#pragma once

#include <iostream>

/// <summary>
/// Enum for game states
/// </summary>
enum GameStates {
    DEFAULT,
    FIGHT,
    EXIT
};

/// <summary>
/// Enum for enemy types. Used by factory to determine which one to generate
/// </summary>
enum EnemyType {
    ENEMY,
    ZOMBIE,
    SPIDER
};

/// <summary>
/// Enum for hero tyoes. Used by factory to determine which one to generate
/// </summary>
enum HeroType {
    HERO,
    WARRIOR,
    ARCHER,
    MAGE,
    DEPRIVED
};

/// <summary>
/// Generate a random number.
/// </summary>
/// <param name="min">Minimum value.</param>
/// <param name="max">Maximum value.</param>
/// <returns>A random integer between `min` and `max` numbers</returns>
int generateRandomNumber(int min, int max) {
    return min + std::rand() % (max - min + 1);
}
