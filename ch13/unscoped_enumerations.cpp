// Define a new unscoped enumeration named Color

enum Color
{
    // Here are the enumerators
    // These symbolic constants define all the possbile values this type can hold

    // Each enumerator is separated by a comma, not a semicolon
    red,
    green,
    blue,   // trailing comma optional but recommended
};  // the enum definition must end with a semicolon

enum Pet
{
    cat,
    dog,
    pig,
    whale,
};

int main()
{
    // Define a few variables of enumerated type Color
    Color apple { red};     // my apple is red
    Color shirt { green};   // my shirt is green
    Color cup { blue};      // my cup is blue

    // Color socks { white};   // error: white is not an enumerator of Color
    // Color hat { 2};         // error: 2 is not an enumerator of Color

    // Pet myPet { black};         // compil error: black is not an enumerator of Pet
    // Color shirt { pig};         // compil error: pig is not an enumerator of Color
    return 0;
}