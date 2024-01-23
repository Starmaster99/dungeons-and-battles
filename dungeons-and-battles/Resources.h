#pragma once

#include <iostream>

/// <summary>
/// Enum for game states. Decides whether to end the game or not
/// </summary>
enum class GameStates {
    DEFAULT,
    FIGHT,
    EXIT
};

/// <summary>
/// Enum for enemy types. Used by factory to determine which one to generate
/// </summary>
enum class EnemyType {
    ENEMY,
    ZOMBIE,
    SPIDER
};

/// <summary>
/// Enum for hero types. Used by factory to determine which one to generate
/// </summary>
enum class HeroType{
    HERO,
    WARRIOR,
    ARCHER,
    MAGE,
    DEPRIVED
};

/// <summary>
/// Enum for fight states. Used by fight() to decide what to do next
/// </summary>
enum class FightState {
    playerIsFirst,
    enemyIsFirst,
    playerIsDead,
    enemyIsDead
};

/// <summary>
/// Enum for post-fight states. Used to decide whether the player or enemy has won the battle
/// </summary>
enum class PostFightState {
    playerWon,
    enemyWon,
};

/// <summary>
/// 
/// </summary>
enum class DodgeState {
    fail,
    success,
    parry
};

/// <summary>
/// Enum for dodge states. Currently not implemented
/// </summary>
enum class DodgeStatus {
    dodgeSuccess,
    dodgeFail
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
