#pragma once

#include <iostream>

/// <summary>
/// Prototype interface class for Enemy. That's the root of all Enemy objects here. Every Enemy object inherits
/// props of that class
/// </summary>
class IEnemy {
public:
    // Virtual destructor. Used to safely delete objects after the game is completed. The "virtual" part here
    // means that destructor is abstract, just like everything in this class, providing a good level of polymorphism
    virtual ~IEnemy() {}
    // a sort of "required" function. For now, a dummy function. 
    // Must be overriden in children classes, otherwise wouldn't work
    virtual void displayInfo() = 0;


    std::string type;   // Determines the type of the enemy, i.e. different properties for different Enemy types
    int health = 1;     // Determines the amount of hitpoints needed to kill an Enemy
    int damage = 1;     // Determines the damage the Enemy deals to Player
    int speed = 1;      // Determines how fast an Enemy moves, meaning who's move is first
    std::string name;   // Enemy's in-game name
};

