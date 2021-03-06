// Guess Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
int number = 1;
int tries = 0;
int play = 1;
int guess;

int NewGame()
{
	number = rand() % 10 + 1;
	while (tries < 3)
	{
		std::cin >> guess;
		tries++;
		if (guess == number)
		{
			std::cout << "Correct\n";
			tries = 0;
			std::cout << "Press 1 for new game\n";
			std::cin >> play;
			return play;
		}
		else
		{
			std::cout << "Wrong Try Again\n";
			std::cout << 3 - tries << " atempts left\n";
		}


		if (tries == 3)
		{
			std::cout << "GameOver\n";
		}
	}
	tries = 0;
	std::cout << "Press 1 for new game\n\n";
	std::cin >> play;
	return play;
}

int main()
{
	std::cout << "Guess the number! between 1 and 10\n";

	while (play == 1)
	{
		NewGame();
	}

	getchar();
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
