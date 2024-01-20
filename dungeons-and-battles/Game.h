#pragma once

#include "Hero/IHero.h"
#include "Hero/Warrior.h"
#include "Hero/Archer.h"
#include "Hero/Mage.h"
#include "Hero/Deprived.h"
#include "Enemy/IEnemy.h"
#include "Enemy/Zombie.h"
#include "Enemy/Spider.h"

/// <summary>
/// A meta class used for different game-related things.
/// </summary>
class Game {
public:
    /// <summary>
    /// Prints a separation line for a better view.
    /// </summary>
    /// <param name="startline">`1` if the line starts with a newline character.</param>
    /// <param name="endline">`1` if the line ends with a newline character.</param>
    void printSep(bool startline, bool endline) {
        if (startline) {
            std::cout << std::endl;
        }
        for (int i = 0; i < 120; i++) {
            std::cout << "=";
        }

        if (endline) {
            std::cout << std::endl;
        }
    }

    /// <summary>
    /// Prints game's logo.
    /// </summary>
    void printLogo() {
        printSep(0, 0);
        // Here we use raw output because of "\" characters.
        std::cout << R"(
                                                ____        ____  
                                                |  _ \ _ __ | __ ) 
                                                | | | | '_ \|  _ \ 
                                                | |_| | | | | |_) |
                                                |____/|_| |_|____/

                                                Dungeons and Battles
                                                     v. 0.4.1
)";
        printSep(0, 1);
    }

    /// <summary>
    /// Starts the game.
    /// </summary>
    void start() {
        printLogo();

        // TODO: make a less depressing story
        std::cout << "You have awaken from a deep afternoon slumber.\n";
        std::cout << "You found yourself on a beautiful green field full of blooming flowers and soft grass under a massive oak tree.\n";
        std::cout << "It feels like you have been sleeping here for ages.\n";

        std::cout << "\nYou are an honest adventurer. You have seen many scary things in your life, but now you are feeling safe.\n";
        std::cout << "You travel alone. You have lost too many friends... You just don't want seeing people you love suffer again.\n";
        std::cout << "\"Time to venture on\" you thought. \"Maybe I'll finally find her in that cave. They'll pay for everything they did to me\".\n";

        std::cout << "\nYou decided to check your equipment. It seems you are a...\n";
        std::cout << "1. Warrior\n";
        std::cout << "2. Archer\n";
        std::cout << "3. Mage\n";
        std::cout << "(Choose a number from the list)\n\n";
        
    }

    /// <summary>
    /// Choose player's class.
    /// </summary>
    /// <param name="choice">Player's number.</param>
    /// <returns>Numerical value of player's class, where:
    ///  1: Warrior,
    ///  2: Archer,
    ///  3: Mage,
    ///  0: Deprived.
    /// </returns>
    HeroType chooseClass() {
        int playerClass;

        std::cin >> playerClass;

        switch (playerClass) {
        case WARRIOR:
            // I couldn't implement damage resistance :(
            std::cout << "\nA warrior. What a mighty class you find yourself in. After a few minutes, you find and equip your double-handed greatsword,\n";
            std::cout << "but shield is nowhere to be found.\n";
            std::cout << "Now you recall: you chose the sheer power of this massive hunk of metall over your safety. Reckless, yet respectable choice.\n";
            return WARRIOR;

        case ARCHER:
            std::cout << "\nRusty dagger, short bow and a few arrows - that's everything you got for a self-defense. You are clearly a ranger.\n";
            std::cout << "The best battles are won before they start. ";
            std::cout << "Swift and lethal shots, nimble movements, precise strikes and deadly reflexes... You'll become a killing machine soon.\n";
            std::cout << "But your body needs time and practice. Just as it did before.\n";
            return ARCHER;

        case MAGE:
            std::cout << "\nTrying to remember something while being still asleep is tough, but you succeeded. Mostly.\n";
            std::cout << "You are The Magician - wise and powerful sorcerer, who learned a lot from his wanders throughout his life. You've been ";
            std::cout << "to the darkest places on the earth casting the most complex spells known to Man.\n";
            std::cout << "Too bad you forgot them all.\n";
            std::cout << "With a greatstaff in your left hand and a small bag of goods in the right you decided to get up and continue your journey.\n";
            return MAGE;

        default:
            std::cout << "\nYou spent a couple of minutes looking for your belongings nowhere to be found.\n";
            std::cout << "And then a thought has stroken your mind.\n";
            std::cout << "You are, quite literally, a no one. A Deprived.\n";
            std::cout << "Your journey is pointless and means nothing. You are not loved by anyone. No one will mourn your death.\n";
            std::cout << "Having completely nothing, it will be tough should you continue your travels.\n";
            std::cout << "Forever marked as an outlaw, you decided to continue. What a pathetic choice.\n";
            return DEPRIVED;
        }


    }

    /// <summary>
    /// Print stats of both player and enemy.
    /// </summary>
    /// <param name="player">Reference to IHero class</param>
    /// <param name="enemy">Reference to IEnemy class</param>
    void printStats(IHero* player, IEnemy* enemy) {
        std::cout << "\nPlayer" << "\nHP: " << player->health << "\nDMG: " << player->damage << "\nSpeed: " << player->speed << std::endl;
        std::cout << "\n" << enemy->name << "\nHP: " << enemy->health << "\nDMG: " << enemy->damage << "\nSpeed: " << enemy->speed << std::endl;
    }


    /// <summary>
    /// Dodge enemy's attack. Is not implemented yet.
    /// </summary>
    /// <returns>1 if attack was dodged, 0 if not</returns>
    bool dodge() {
        bool isDodged = false;


        return isDodged;
    };

    /// <summary>
    /// Parry enemy's attack if dodge returned 1. Is not implemented yet.
    /// </summary>
    bool parry() {
        bool isDodged = dodge();


        return !isDodged;
    };

    /// <summary>
    /// I have an extreme case of burnout and depression.
    /// </summary>
    void credits() {
        std::cout << "\nIt was a truly hard fight. One might say, an ultimate test of your skills. But you succeeded.\n";
        std::cout << "You decided to get to the end of that cursed cave. A couple more meters...\n";
        std::cout << "There. You found her. An absolutely disfigured corpse of a young woman. Her clothes are torn apart like they are a dirty rags ";
        std::cout << "and her body is wounded beyond the point of recognition.\n";
        std::cout << "You fell down on your knees. A grimace of horror on her face is forever imprinted in your memory.\n";
        std::cout << "This is what you get after so many tiresome battles. A body of your beloved.\n";

        std::cout << "\nYou hear loud roars of monsters heading your way. After all, it seems you haven't killed them all.\n";
        std::cout << "You decide to end your journey here. She was the last thing keeping you in this world, and now she is gone.\n";

        std::cout << "\nYou are losing your consciousness from the vast blood loss. They won't get you alive.\n";
        std::cout << "With this thought in mind, you have decided to relax for the last time in your life.\n";
        
        return;
    }


}; 