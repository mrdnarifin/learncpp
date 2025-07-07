#include <iostream>

void fizzbuzz(int value)
{
    for (int i{ 1}; i <= value; i++)
    {
        // if ((i % 3 == 0) && (i % 5 == 0))
        //     std::cout << "fizzbuzz\n";
        // else if (i % 3 == 0)
        //     std::cout << "fizz\n";
        // else if ( i % 5 == 0)
        //     std::cout << "buzz\n";
        // else if ( i % 7 == 0)
        //     std::cout << "pop\n";
        // else
        //     std::cout << i << "\n";

        bool printed{ false };
		if (i % 3 == 0)
		{
			std::cout << "fizz";
			printed = true;
		}
		if (i % 5 == 0)
		{
			std::cout << "buzz";
			printed = true;
		}
		if (i % 7 == 0)
		{
			std::cout << "pop";
			printed = true;
		}

		if (!printed)
			std::cout << i;

		std::cout << '\n';
    }
}

int main()
{
    fizzbuzz(150);
    return 0;
}