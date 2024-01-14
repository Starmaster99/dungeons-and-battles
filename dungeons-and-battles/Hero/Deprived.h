#pragma once

#include "Hero/IHero.h"
#include "../Resources.h"

class Deprived : public IHero {
public:
    Deprived() {
        type = "deprived";
        health = 1;
        damage = 1;
        speed = 1;
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