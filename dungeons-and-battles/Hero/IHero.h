#pragma once

#include <iostream>
#include "../Resources.h"


/// <summary>
/// Prototype interface class for Hero. It will be used as a "blueprint" for player's game classes
/// </summary>
class IHero {
public:
    virtual ~IHero() {}

    /// <summary>
    /// Check player's characteristics
    /// </summary>
    virtual void inspectSelf() = 0;

    HeroType HERO;              // Hero's type
    int health = 1;             // Amount of health player has now
    int damage = 1;             // Player's damage
    int speed = 1;              // Player's speed, meaning who's move is first
    std::string specialType;    // Type of special: arrows, mana, whatever
    int specialAmount = 1;      // Amount of said special. I don't have much time 
};

