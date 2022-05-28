// This program asks the user to enter a number and then a larger number.
// If the second number is not larger, it will swap the numbers to ensure
// the variables are holding the intended data.

#include "io.h"
#include "namespace.h"
#include <iostream>


int main()
{
	// calls the functions to get a number and a larger number from the user.
	int smallInteger{ small::getInteger() };
	int largeInteger{ large::getInteger() };

	// prints "Well Done!" to the screen if the user followed the instructions.
	if (followedInstructions(smallInteger, largeInteger))
	{
		printWellDone();
	}

	// calls a function that swaps the values held by the variables if the user
	// did not follow the instructions.
	else
	{
		std::cout << "Swapping the values... \n";
		swapValues(smallInteger, largeInteger);
	}

}