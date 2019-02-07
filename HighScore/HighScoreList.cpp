#include "pch.h"
#include <iostream>
#include "HighScoreList.h"
using namespace std;


HighScoreList::HighScoreList()
{
}


HighScoreList::~HighScoreList()
{
	delete[] HighScores;
}
