#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include "HighScore.h"
using namespace std;

class HighScore
{
public:
	HighScore(string name = "Default", int score = 0);
	~HighScore();
	string name;
	int score;
};

