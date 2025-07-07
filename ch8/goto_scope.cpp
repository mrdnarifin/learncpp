#include <iostream>

void printCats(bool skip)
{
    if (skip)
        goto end;   // jump forward; statement label 'end' is visible here due to it having function scope

    std::cout << "cats\n";

end:
    std::cout << "END executed\n"; // statement labels must be assosiate with a statement
}

int main()
{
    printCats(true);    // jumps over the print statement and doesn't print anything
    printCats(false);   // print "cats"

    return 0;
}