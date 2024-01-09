#pragma once

#include <iostream>

/// <summary>
/// Generate a random number.
/// </summary>
/// <param name="min">Starting value.</param>
/// <param name="max">Ending value.</param>
/// <returns>A random integer between `min` and `max` numbers</returns>
int generateRandomNumber(int min, int max) {
    return min + std::rand() % (max - min + 1);
}

// Prototype interface class for Enemy. That's the root of all Enemy objects here. Every Enemy object inherits
// props of that class
class IEnemy {
public:
    // Virtual destructor. Used to safely delete objects after the game is completed. The "virtual" part here
    // means that destructor is abstract, just like everything in this class, providing a good level of polymorphism
    virtual ~IEnemy() {}
    // a sort of "required" function. For now, a dummy function. 
    // Must be overriden in children classes, otherwise wouldn't work
    virtual void displayInfo() = 0;

    std::string type;   // Determines the type of the enemy, i.e. different properties for different Enemy types
    int health;         // Determines the amount of hitpoints needed to kill an Enemy
    int damage;         // Determines the damage the Enemy deals to Player
    int speed;          // Determines how fast an Enemy moves, meaning who's move is first
    std::string name;   // Enemy's name
};

