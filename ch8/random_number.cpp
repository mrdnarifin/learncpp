#include <iostream>
#include <random>   // for std::mt19937 and std::uniform_int_distribution

int main()
{
    std::mt19937 mt{};  // Instantitate a 32-bit Mersenne Twister

    // print a bunch or random numbers
    // for (int count { 1}; count <=40; ++count)
    // {
    //     std::cout << mt() << "\t";  // generate a random number

    //     // if we've printed 5 numbers, start a new row
    //     if (count % 5 == 0)
    //         std::cout << "\n";
    // }

    // create a reusable random number generator that generates uniform numbers between 1 and 6
    std::uniform_int_distribution die6 {1, 6};  // for c++14, use std::uniform_int_distribution<> die6 {1, 6}

    // print a bunch of random numbers
    for (int count { 1}; count <= 40; ++count)
    {
        std::cout << die6(mt) << "\t";  // generate a roll of the die here

        // if we've printed 10 numbers, start a new row
        if (count % 10 == 10)
            std::cout << "\n";
    }

    return 0;
}