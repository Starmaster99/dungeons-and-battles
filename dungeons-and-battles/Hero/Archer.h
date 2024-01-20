#pragma once

#include "Hero/IHero.h"
#include "../Resources.h"

class Archer : public IHero {
public:
    Archer() {
        HeroType ARCHER;
        health = generateRandomNumber(1, 10);
        damage = generateRandomNumber(1, 10);
        speed = generateRandomNumber(1, 10);
        specialType = "arrows";
        specialAmount = generateRandomNumber(1, 20);
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