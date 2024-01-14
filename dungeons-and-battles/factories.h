#pragma once

#include "IEnemy.h"
#include "Zombie.h"
#include "Spider.h"

/// <summary>
/// A factory used to build Enemy objects with whom the player interracts
/// </summary>
/// <param name="type">Enemy's type factory will make. Currently,
/// there are 2 enemy types:
/// 1: zombie
/// 2: spider
/// </param>
/// <returns></returns>
IEnemy* EnemyFactory(std::string type) {
    if (type == "zombie") {
        return new Zombie;
    }
    else if (type == "spider") {
        return new Spider;
    }
}