//
// DISCLAIMER
// I've written a lot of really unnecessary OOP and design patterns we shouldn't even know exist right
// now, but I wanted a challenge and to spice up the code a little bit, so I decided to play
// with what I know now and learn new things while I'm working on this "game".
// That was the main idea of the project, wasn't it?
// 
// P. S.
// Yes, I was inspired by [HelloWorld Enterprise Edition](https://gist.github.com/lolzballs/2152bc0f31ee0286b722).
//

#include <iostream>
#include <ctime>

#include "Game.h"
#include "factories.h"
#include "Hero/IHero.h"
#include "Hero/Warrior.h"
#include "Hero/Archer.h"
#include "Hero/Mage.h"
#include "Hero/Deprived.h"
#include "Enemy/IEnemy.h"
#include "Enemy/Zombie.h"
#include "Enemy/Spider.h"

int main()
{
    int score = 0;
    GameStates state = DEFAULT;

    // Initialize rand() function so we'll get really random variables
    srand(time(NULL));

    // Create game class with type Game so we can use all of its methods
    Game game;

    // Initialize empty player variable so switch-case lower can fill it
    IHero*  player = nullptr;
    IEnemy* enemy  = nullptr;

    game.start();

    player = HeroFactory(game.chooseClass());

    std::cout << "\nYou make some final preparations and decide to enter the damned cave. Things aren't looking great for you, but you've been to worse places.\n";
    std::cout << "Upon arriving to the entrance, you start hearing deep growls of monsters nearby. Time to show them who's on the top of food chain!\n";

    game.printSep(1, 1);

    EnemyType type = static_cast<EnemyType>(generateRandomNumber(1, 2));
    enemy = EnemyFactory(type);

    game.printStats(player, enemy);
    // Engage!
//    game.prepFight(player->speed, enemy->speed, player->damage, enemy->damage, player->health, enemy->health, enemy->name);
//    game.printStats(player, enemy);

    while (state != EXIT) {
        
    }

    // Remember to clean after yourself
    delete player;
    delete enemy;
    system("pause");
    return 0;
}
