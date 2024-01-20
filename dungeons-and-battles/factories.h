#pragma once

#include "Enemy/IEnemy.h"
#include "Enemy/Zombie.h"
#include "Enemy/Spider.h"
#include "Hero/IHero.h"
#include "Hero/Warrior.h"
#include "Hero/Archer.h"
#include "Hero/Mage.h"
#include "Hero/Deprived.h"
#include "Resources.h"

/// <summary>
/// A factory used to build Enemy objects with whom the player interracts
/// </summary>
/// <param name="type">Enemy's type factory will make. Currently, there are 2 enemy types:
/// 1: zombie
/// 2: spider
/// </param>
/// <returns></returns>
IEnemy* EnemyFactory(EnemyType type) {
    switch (type) {
    case ZOMBIE:    return new Zombie;
    case SPIDER:    return new Spider;
    default:        return new Zombie;
    }
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
IHero* HeroFactory(HeroType type) {
    switch (type) {
    case WARRIOR:   return new Warrior;
    case ARCHER:    return new Archer;
    case MAGE:      return new Mage;
    case DEPRIVED:  return new Deprived;
    default:        return new Deprived;
    }
}