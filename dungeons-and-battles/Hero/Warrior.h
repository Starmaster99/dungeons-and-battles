#pragma once

#include "Hero/IHero.h"
#include "../Resources.h"

class Warrior : public IHero {
public:
    Warrior() {
        HeroType WARRIOR;
        health = generateRandomNumber(10, 20);
        damage = generateRandomNumber(1, 3);
        speed = generateRandomNumber(1, 10);
        specialType = "none";
        specialAmount = 0;
    }

    void inspectSelf() override {
        std::cout << "Player: "
            << "\nHP: " << health
            << "\nDMG: " << damage
            << "\nSpeed: " << speed
            << "\nSpecial type: " << specialType
            << "\nAmmo: " << specialAmount;
    }


};