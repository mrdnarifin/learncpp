#include <iostream>

void ifelse(bool a, bool b, bool c)
{
    if (a)      // always evaluates
        std::cout << "a";   
    else if (b) // only evaluates when prior if-statement condition is false
        std::cout << "b";
    else if (c) // only evaluates when prior if-statement condition is false
        std::cout << "c";
    std::cout << "\n";
}

void ifif(bool a, bool b, bool c)
{
    if (a)  // always evaluates
        std::cout << "a";
    if (b)  // always evaluates
        std::cout << "b";
    if (c)  // always evaluates
        std::cout << "c";

    std::cout << "\n";
}

char getFirstMatchingChar(bool a, bool b, bool c)
{
    if (a)  // always evaluates
        return 'a';
    else if (b) // only evaluates when prior if-statement condition is false
        return 'b';
    else if (c) // only evaluates when prior if-statement condition is false
        return 'c';

    return 0;
}

int main()
{
    ifelse(false, true, true);
    ifif(false, true, true);

    std::cout << getFirstMatchingChar(true, false, true);

    return 0;
}

