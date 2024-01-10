#pragma once

#include "IEnemy.h"
#include "Zombie.h"
#include "Spider.h"

IEnemy* EnemyFactory(std::string type) {
    if (type == "zombie") {
        return new Zombie;
    }
    else if (type == "spider") {
        return new Spider;
    }
}