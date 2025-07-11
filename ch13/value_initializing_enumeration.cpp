#include <iostream>

enum Animal 
{
    cat = -3,       // -3
    dog,            // -2
    pig,            // -1
    // note: no enumerator with value 0 in this list
    horse = 5,      // 5
    giraffe = 5,    // 5
    chicked,        // 6
};

enum UniverseREsult
{
    destroyUniverse,        // default (0)
    saveUniverse
};

enum Winner
{
    winnerUnknown,      // default value (0)
    player1,
    player2,
};

enum Color
{
    black, // assigned 0
    red, // assigned 1
    blue, // assigned 2
    green, // assigned 3
    white, // assigned 4
    cyan, // assigned 5
    yellow, // assigned 6
    magenta, // assigned 7
};

int main()
{
    Animal a {};    // value-initialization zero-initializes a to value 0
    std::cout << a << "\n"; // prints 0

    Color shirt{ blue };

    std::cout << "Your shirt is " << shirt << '\n'; // what does this do?

    return 0;
}

