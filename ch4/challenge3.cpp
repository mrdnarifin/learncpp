#include <iostream>

// gets tower height from user and returns it
double getTowerHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double towerHeight{};
    std::cin >> towerHeight;
    return towerHeight;
}

// Return the current ball height after "seconds" seconds
double calculateBallHeight(double towerHeight, int seconds)
{
    double gravity{9.8};

    // using formula: s = (u * t) + (a * t^2)/2;
    // here u ( initial velocity ) = 0, so (u * t) = 0
    double fallDistance{gravity * (seconds * seconds) /  2.0};
    double ballheight {towerHeight - fallDistance};

    // if the ball would be under the ground, place it on the ground
    if (ballheight < 0.0)
        return 0.0;

    return ballheight;
}

// Prints ball height above the ground
void printBallHeight(double ballheight, int seconds)
{
    if (ballheight > 0.0)
        std::cout << "At " << seconds << " seconds, the ball is at height: " << ballheight << "meters\n";
}

// Calculates the current ball height and then prints it
// this is a helper function to make it easiser to do this
void calculateAndPrintBallHeight(double towerHeight, int seconds)
{
    double ballHeight {calculateBallHeight(towerHeight,seconds)};
    printBallHeight(ballHeight, seconds);
}

int main()
{
    double towerHeight{getTowerHeight()};

    calculateAndPrintBallHeight(towerHeight, 0);
    calculateAndPrintBallHeight(towerHeight, 1);
    calculateAndPrintBallHeight(towerHeight, 2);
    calculateAndPrintBallHeight(towerHeight, 3);
    calculateAndPrintBallHeight(towerHeight, 4);
    calculateAndPrintBallHeight(towerHeight, 5);
}

