#include <iostream>

void printUpto( int outer)
{
    // loop betwwen 1 and outer
    // note: inner will be created and destroyed at the end of the block
    int inner { 1};
    while (inner <= outer)
    {
        std::cout << inner << ' ';
        ++inner;
    }
}

int main()
{
    // outer loops between 1 and 5
    int outer { 1};
    std::cout << "Input Max Number: ";
    int max {};
    std::cin >> max;

    while (outer <= max)
    {
        // Foreach iteration of the outer loop, the code in the body of the loop execute once
        // this functions prints number betweens 1 and outer
        printUpto(outer);

        // print a newline at the of each row
        std::cout << "\n";
        ++outer;
    }

    return 0;
}