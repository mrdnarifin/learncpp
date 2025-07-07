#include <iostream>

unsigned int g_state { 0};

void seedPRNG(unsigned int seed)
{
    g_state = seed;
}

// for illustrative purpose only, don't use this
unsigned int LCG16()    // our PNG
{
    // we modify the state using large constants and intentional overflow to make it hard
    // for someone to casually determine what the next number in the sequence will be
    g_state = 8253729 * g_state + 2396403;  // first we modify the state
    return g_state % 32768; // then we use the new state to generate the next in the sequence

}

void print10()
{
    // print 10 random numbers
    for (int count { 1}; count <= 10; ++count)
    {
        std::cout << LCG16() << "\t";
    }

    std::cout << "\n";
}

int main()
{
    unsigned int x {};
    std::cout << "Enter a seed value: ";
    std::cin >> x;

    seedPRNG(x);
    print10();

    return 0;
}