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

// Prototype interface class for Enemy. That's the root of all Enemy objects here. Every Enemy object inherits
// props of that class
class IEnemy {
public:
    // Virtual destructor. Used to safely delete objects after the game is completed. The "virtual" part here
    // means that destructor is abstract, just like everything in this class, providing a good level of polymorphism
    virtual ~IEnemy() {}
    // a sort of "required" function. For now, a dummy function. 
    // Must be overriden in children classes, otherwise wouldn't work
    virtual void displayInfo() = 0;

    std::string type;   // Determines the type of the enemy, i.e. different properties for different Enemy types
    int health;         // Determines the amount of hitpoints needed to kill an Enemy
    int damage;         // Determines the damage the Enemy deals to Player
    int speed;          // Determines how fast an Enemy moves, meaning who's move is first
    std::string name;   // Enemy's name
};

// A "child" class of IEnemy interface class. IEnemy here is called a "parent" class. That's all about inheritance
class Spider : public IEnemy {
public:
    // Here, we initialize that class when EnemyFactory design pattern function is called
    Spider() {
        type = "spider";
        health = 100;
        damage = 10;
        speed = 50;
        name = "Silky Spider";
    }
    // Here, we override that virtual method. Polymorphism in all it's glory
    void displayInfo() override {
        std::cout << "Enemy: " << name
            << "\nType: " << type
            << "\nHP: " << health
            << "\nDMG: " << damage
            << "\nSpeed: " << speed << std::endl;
    };
    // Private access level means that no other method in all other classes can modify these variables.
    // Encapsulation is responsible for it.
private:
    std::string type;
    int health;
    int damage;
    int speed;
    std::string name;
};

class Zombie : public IEnemy {
public:
    Zombie() {
        type = "zombie";
        health = 100;
        damage = 10;
        speed = 50;
        name = "Hungry Zombie";
    }
    void displayInfo() override {
        std::cout << "Enemy: " << name
            << "\nType: " << type
            << "\nHP: " << health
            << "\nDMG: " << damage
            << "\nSpeed: " << speed << std::endl;
    };
};

IEnemy* EnemyFactory(std::string type) {
    if (type == "zombie") {
        return new Zombie;
    }
    else if (type == "spider") {
        return new Spider;
    }
}

int main()
{
    IEnemy* z = EnemyFactory("zombie");
    z->displayInfo();

    std::cout << std::endl;

    IEnemy* s = EnemyFactory("spider");
    s->displayInfo();


    // Don't forget to clean reserved memory. This is important!
    delete z;
    delete s;
    return 0;
}
