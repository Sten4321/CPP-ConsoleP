// Array loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	float Array[] = { 23,1,24.3,75,11.7 };

	for (int a = 0; a < sizeof(Array) / sizeof(Array[0]); a++)
	{
		std::cout << Array[a] << "\n";
	}
	std::cout << "\n";

	for (float var : Array)
	{
		std::cout << var << "\n";
	}
	std::cout << "\n";

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
