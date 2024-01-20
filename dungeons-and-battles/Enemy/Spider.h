#pragma once

#include "Enemy/IEnemy.h"
#include "../Resources.h"

/// <summary>
/// A "child" class of IEnemy interface class. IEnemy here is called a "parent" class. That's all about inheritance
/// </summary>
class Spider : public IEnemy {
public:
    // Here, we initialize class Spider when EnemyFactory design pattern function is called
    Spider() {
        EnemyType SPIDER;
        health = generateRandomNumber(10, 10);
        damage = generateRandomNumber(1, 5);
        speed = generateRandomNumber(1, 10);
        name = "Silky Spider";
    }
    // Here, we override IEnemy's displayInfo() method. Polymorphism in all it's glory
    void displayInfo() override {
        std::cout << "Enemy: "   << name
                  << "\nHP: "    << health
                  << "\nDMG: "   << damage
                  << "\nSpeed: " << speed;
    };
};