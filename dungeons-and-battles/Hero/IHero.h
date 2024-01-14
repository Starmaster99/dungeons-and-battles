#pragma once

#include <iostream>

/// <summary>
/// Prototype interface class for Hero. It will be used as a "blueprint" for player's game classes
/// </summary>
class IHero {
public:
    virtual ~IHero() {}

    virtual void inspectSelf()  = 0;    // Check player's characteristics
    virtual void inspectEnemy() = 0;    // Check enemy's characteristics
    virtual void fight()        = 0;    // Engage with enemy
    virtual bool dodge()        = 0;    // Dodge enemy's attack
    virtual void parry()        = 0;    // Parry enemy's attack if dodge was successful

    std::string type;   // Player's class type
    int health;         // Amount of health player has now
    int damage;         // Player's damage
    int speed;          // Player's speed, meaning who's move is first
    int special;        // Amount of arrows, mana, whatever. I don't have much time 
};

