#pragma once

#include "Enemy/IEnemy.h"
#include "../Resources.h"

/// <summary>
/// A "child" class of IEnemy interface class. IEnemy here is called a "parent" class. That's all about inheritance
/// </summary>
class Zombie : public IEnemy {
public:
    Zombie() {
        EnemyType ZOMBIE;
        health = generateRandomNumber(10, 10);
        damage = generateRandomNumber(1, 3);
        speed = generateRandomNumber(1, 5);
        name = "Hungry Zombie";
    }
    void displayInfo() override {
        std::cout << "Enemy: "   << name
                  << "\nHP: "    << health
                  << "\nDMG: "   << damage
                  << "\nSpeed: " << speed;
    };
};

