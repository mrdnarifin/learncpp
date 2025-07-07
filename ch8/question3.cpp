#include <iostream>

//Loop between 5 and 1
int main()
{
    int outer { 5};
    while (outer >= 1)
    {
        // Loop betwwen outer and 1
        int inner { outer};
        while (inner >= 1)
        {
            std::cout << inner-- << ' ';
        }

        // Print a newline at the end of each row
        std::cout << "\n";
        --outer;
    }

    return 0;
}