#include <iostream>
#include <string>

// const int& returnByConstReference()
// {
//     return 5;       // returns const reference to temporary object
// }

const int& getNextId()
{
    static int s_x {0};     // note: variable is non-const
    ++s_x;                  // generate the next id
    return s_x;
}

int main()
{
    // const int& ref { returnByConstReference()};

    // std::cout << ref;       // undefined behavior

    const int& id1 {getNextId()};    // id1 is a reference
    const int& id2 { getNextId()};  // id2 is a reference

    std::cout << id1 << id2 << "\n";

    return 0;
}