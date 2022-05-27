#include "io.h"
#include <iostream>

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

bool followedInstructions(int x, int y)
{
	return (y > x);
}

void printWellDone()
{
	std::cout << "Well done! You followed the instructions!\n";
}

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