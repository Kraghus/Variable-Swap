#include "io.h"
#include "namespace.h"
#include <iostream>


int main()
{
	int smallInteger{ small::getInteger() };
	int largeInteger{ large::getInteger() };

	if (followedInstructions(smallInteger, largeInteger))
	{
		printWellDone();
	}
	else
	{
		std::cout << "Swapping the values... \n";
		swapValues(smallInteger, largeInteger);
	}

}