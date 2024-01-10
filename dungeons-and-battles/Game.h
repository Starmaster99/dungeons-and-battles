#pragma once

#include "IEnemy.h"

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
        for (int i = 0; i < 116; i++) {
            std::cout << "=";
        }
        //std::cout << "====================================================================================================================";
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
                                                     v. 0.3.0
)";
        printSep(0, 1);
    }

    /// <summary>
    /// Starts the game.
    /// </summary>
    void start() {
        int n = 0;
        printLogo();

        // TODO: make a less depressing story
        std::cout << "You have awaken from a deep afternoon slumber.\n";
        std::cout << "You found yourself on a beautiful green field full of blooming flowers and soft grass under a massive oak tree.\n";
        std::cout << "It feels like you have been sleeping here for ages.\n";

        std::cout << "\nYou are an adventure hunter. You have seen many scary things in your life, but now you are feeling safe.\n";
        std::cout << "You don't travel with other people. You have lost too many. You just don't want seeing people you love suffer again.\n";
        std::cout << "\"Time to venture on\" you thought. \"Maybe I'll finally find her in that cave. They'll pay for everything they did to me\".\n";

        std::cout << "\nYou decided to check your equipment. It seems you are a...\n";
        std::cout << "1. Warrior;\n";
        std::cout << "2. Archer;\n";
        std::cout << "3. Mage;\n";

        // TODO: secret class 0. deprived

        

    }

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

        std::cout << "\nYou hear a loud screams of monsters heading your way. After all, it seems you haven't killed them all.\n";
        std::cout << "You decide to end your journey here. She was the last thing keeping you in this world, and now she is gone.\n";

        std::cout << "\nYou are losing your consciousness from the vast blood loss. They won't get you alive.\n";
        std::cout << "With this thought in mind, you have decided to relax for the last time in your life.\n";
    }
};