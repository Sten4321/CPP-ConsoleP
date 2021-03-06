// Array pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

//give an array and a sizeOf of the array
int* Swap(int * array, int size)
{
	for (int i = 0; i < size / sizeof(array); i++)
	{
		cout << array[i] << endl;
	}
	cout << endl;

	int first = array[0];
	array[0] = array[(size / sizeof(array)) - 1];
	array[(size / sizeof(array)) - 1] = first;

	return array;
}

int main()
{
	int arr[9] = { 9,7,5,3,1,8,6,4,2 };
	Swap(arr, sizeof(arr));

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << endl;
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
