#pragma once

#include "Hero/IHero.h"
#include "../Resources.h"

class Deprived : public IHero {
public:
    Deprived() {
        HeroType DEPRIVED;
        health = 1;
        damage = 1;
        speed = 1;
        specialType = "none";
        specialAmount = 0;
    }

    void inspectSelf() override {
        std::cout << "Player: " << DEPRIVED
            << "\nHP: " << health
            << "\nDMG: " << damage
            << "\nSpeed: " << speed
            << "\nSpecial type: " << specialType
            << "\nAmmo: " << specialAmount;
    }
};