#pragma once

#include "Hero/IHero.h"
#include "../Resources.h"

class Mage : public IHero {
public:
    Mage() {
        HeroType MAGE;
        health = generateRandomNumber(1, 10);
        damage = generateRandomNumber(1, 10);
        speed = generateRandomNumber(1, 10);
        specialType = "mana";
        specialAmount = generateRandomNumber(10, 100);
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