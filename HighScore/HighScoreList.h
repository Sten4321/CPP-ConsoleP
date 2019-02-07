#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include "HighScore.h"
using namespace std;

class HighScoreList
{
public:
	HighScoreList();
	~HighScoreList();
	vector<HighScore*> * HighScores = new vector<HighScore*>;
};

