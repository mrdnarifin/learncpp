enum Pet    // no specified base
{
    cat,
    dog,
    pig,
    whale,
};

int main()
{
    // Pet pet { 2};   // compile error: integer value 2 won't implicitly convert to a Pet
    // pet = 3;        // compile error: integer value 3 won't implicitly convert to a Pet

    // using static_cast
    Pet pet { static_cast<Pet>(2)}; // convert integer 2 to a Pet
    pet = static_cast<Pet>(3);      // our pig evolved into a whale!

    return 0;
}