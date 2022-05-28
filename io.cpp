// This file holds all function definitions.

#include "io.h"
#include <iostream>

// asks the user to enter an integer and stores it's value. Using namespace
// as an educational tool--not because it is the optimal solution.
namespace small
{
	int getInteger()
	{
		std::cout << "Enter an integer: ";
		int x{};
		std::cin >> x;
		return x;
	}
}

// asks the user to enter a larger integer and stores it's value. Using namespace
// as an educational tool--not because it is the optimal solution.
namespace large
{
	int getInteger()
	{
		std::cout << "Enter a larger integer: ";
		int x{};
		std::cin >> x;
		return x;
	}
}

// tests whether or not the second number entered is actually larger than the first.
bool followedInstructions(int x, int y)
{
	return (y > x);
}

// prints "Well Done! message to the console if the second input was larger than the first.
void printWellDone()
{
	std::cout << "Well done! You followed the instructions!\n";
}

// swaps the variables and prints them to the console if the user did not input the
// values as intended. I'm not sure why I had to nest 2 variables to get this to work,
// but it must have something to do with the values being passed.
int swapValues(int x, int y)
{
	int z{ y };
	{
		int y{ x };
		int x{ z };

		std::cout << "The smaller value is " << x << ".\n";
		std::cout << "The larger value is " << y << ".\n";
	}
	return 0;
}