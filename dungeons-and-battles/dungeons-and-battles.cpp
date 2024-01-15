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
#include "Enemy/IEnemy.h"
#include "Enemy/Zombie.h"
#include "Enemy/Spider.h"

int main()
{
    int choice = 0;
    int score = 0;

    // Initialize rand() function so we'll get really random variables
    srand(time(NULL));

    // Create game class with type Game so we can use all of its methods
    Game game;

    // Initialize empty player variable so switch-case lower can fill it
    IHero*  player = nullptr;
    IEnemy* enemy  = nullptr;

    game.start();

    choice = game.chooseClass();
    switch (choice) {
    case 1:     player = HeroFactory("warrior");    break;
    case 2:     player = HeroFactory("archer");     break;
    case 3:     player = HeroFactory("mage");       break;
    default:    player = HeroFactory("deprived");   break;
    }

    game.printSep(1, 1);

    switch (generateRandomNumber(1, 2)) {
    case 1:     enemy = EnemyFactory("zombie"); break;
    case 2:     enemy = EnemyFactory("spider"); break;
    default:    enemy = EnemyFactory("zombie"); break;
    }

    // PROBLEM: infinite battles
    game.fight(player->speed, enemy->speed, player->damage, enemy->damage, player->health, enemy->health, enemy->name, &score);

    std::cout << enemy->health;

    game.credits();
    std::cout << "\nScore: " << score << std::endl;

    // Remember to clean after yourself
    delete player;
    delete enemy;
    system("pause");
    return 0;
}
