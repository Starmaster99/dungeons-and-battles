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
        std::cout << "=============================================";
        if (endline) {
            std::cout << std::endl;
        }
    }

    void start() {

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
)";
        printSep(0, 0);
        std::cout << std::endl;
    }
};