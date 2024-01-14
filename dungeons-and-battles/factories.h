#pragma once

#include "Enemy/IEnemy.h"
#include "Enemy/Zombie.h"
#include "Enemy/Spider.h"
#include "Hero/IHero.h"
#include "Hero/Warrior.h"
#include "Hero/Archer.h"
#include "Hero/Mage.h"
#include "Hero/Deprived.h"

/// <summary>
/// A factory used to build Enemy objects with whom the player interracts
/// </summary>
/// <param name="type">Enemy's type factory will make. Currently, there are 2 enemy types:
/// 1: zombie
/// 2: spider
/// </param>
/// <returns></returns>
IEnemy* EnemyFactory(std::string type) {
    if      (type == "zombie")  return new Zombie;
    else if (type == "spider")  return new Spider;
}

/// <summary>
/// A factory used to build Hero objects.
/// Practically, spawns player.
/// </summary>
/// <param name="type">Enemy's type factory will make. Currently, there are 4 player classes:
/// 1: Warrior
/// 2: Archer
/// 3: Mage
/// 4: Deprived
/// </param>
/// <returns></returns>
IHero* HeroFactory(std::string type) {
    if      (type == "warrior")  return new Warrior;
    else if (type == "archer")   return new Archer;
    else if (type == "mage")     return new Mage;
    else if (type == "deprived") return new Deprived;
}