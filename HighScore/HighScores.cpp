// HighScore.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "HighScoreList.h"
#include "HighScore.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define LIST() list->HighScores
#define AddToHighScore(name,score) LIST()->push_back(new HighScore(#name,score));

int main()
{
	HighScoreList * list = new HighScoreList;

	list->HighScores->push_back(new HighScore());
	LIST()->push_back(new HighScore("Hej", 5));
	AddToHighScore(Ole, 20);
	AddToHighScore(Levi, 1000);

	for (int i = 1; i <= 110; i++)
	{
		AddToHighScore(Bent, (20 + i));
	}

	for (int i = 0; i < 100; i++)
	{
		LIST()->erase(LIST()->begin() + 4);
	}
	
	for (HighScore* name : *list->HighScores)
	{
		cout << "Name: " << name->name << " Score: " << name->score << endl;
	}

	getchar();
	delete list;
	list = nullptr;
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