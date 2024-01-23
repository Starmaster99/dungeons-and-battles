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
    GameStates state = GameStates::DEFAULT;
    FightState preFight;

    // Initialize rand() function so we'll get really random variables
    srand(time(NULL));

    // Create game class with type Game so we can use all of its methods
    Game game;

    // Initialize empty player variable so switch-case lower can fill it
    IHero*  player = nullptr;
    IEnemy* enemy  = nullptr;

    game.start();

    player = HeroFactory(game.chooseClass());

    game.printSep(1, 1);

    EnemyType type = static_cast<EnemyType>(generateRandomNumber(1, 2));
    enemy = EnemyFactory(type);

    while (state == GameStates::DEFAULT) {
        preFight = game.preFight(player, enemy);
        if (preFight == FightState::playerIsDead) {
            score++;
            state = GameStates::EXIT;
            game.credits();
            game.printSep(1, 1);
            std::cout << "Final score: " << score << std::endl;
            system("pause");
            return 0;
        }
        FightState loopState = game.fight(player, enemy, preFight);

        if (loopState == FightState::enemyIsDead) {
            score++;
            delete enemy;
            enemy = EnemyFactory(type);
        }
        else if (loopState == FightState::playerIsDead) {
            score++;
            state = GameStates::EXIT;
            game.credits();
            game.printSep(1, 1);
            std::cout << "Final score: " << score << std::endl;
        }
    }

    // Remember to clean after yourself
    delete player;
    delete enemy;
    system("pause");
    return 0;
}
