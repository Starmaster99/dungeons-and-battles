#pragma once

#include "Hero/IHero.h"
#include "../Resources.h"


class Warrior : public IHero {
public:
    Warrior() {
        type = "warrior";
        health = generateRandomNumber(1, 10);
        damage = generateRandomNumber(1, 10);
        speed = generateRandomNumber(1, 10);
        specialType = "none";
        specialAmount = 0;
    }

    void inspectSelf() override {
        std::cout << "Player: " << type
            << "\nHP: " << health
            << "\nDMG: " << damage
            << "\nSpeed: " << speed
            << "\nSpecial type: " << specialType
            << "\nAmmo: " << specialAmount;
    }


};