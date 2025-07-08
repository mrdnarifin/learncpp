#include <iostream>

int main()
{
    using Miles = long;     // define Miles as an alias for type long
    using Speed = long;     // define Speed as an alias for type long

    Miles distance { 5};    // distance is actually just a long
    Speed mhz { 3200};      // mhz is actually just a long

    // the following is syntactically valid ( but semantically meaningless)
    distance = mhz;

    return 0;
}