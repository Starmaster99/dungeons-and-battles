﻿//
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
#include "Enemy/IEnemy.h"
#include "Enemy/Zombie.h"
#include "Enemy/Spider.h"
#include "factories.h"

int main()
{
    // Initialize rand() function so we'll get really random variables
    srand(time(NULL));
    
    Game game;
    IEnemy* zombie = EnemyFactory("zombie");
    IEnemy* spider = EnemyFactory("spider");

    game.start();
    game.chooseClass();


    //zombie->displayInfo();
    //game.printSep(1, 1);
    //spider->displayInfo();


    delete zombie;
    delete spider;
    return 0;
}
