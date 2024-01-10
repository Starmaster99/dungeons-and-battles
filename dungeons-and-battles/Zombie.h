#pragma once

#include "IEnemy.h"

class Zombie : public IEnemy {
public:
    Zombie() {
        type = "zombie";
        health = generateRandomNumber(1, 7);
        damage = generateRandomNumber(1, 3);
        speed = generateRandomNumber(1, 5);
        name = "Hungry Zombie";
    }
    void displayInfo() override {
        std::cout << "Enemy: "   << name
                  << "\nType: "  << type
                  << "\nHP: "    << health
                  << "\nDMG: "   << damage
                  << "\nSpeed: " << speed;
    };
private:
    std::string type;
    int health;
    int damage;
    int speed;
    std::string name;
};

