#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include "HighScore.h"
#include "HighScore.h"
using namespace std;


HighScore::HighScore(string name, int score)
{
	this->name = name;
	this->score = score;
}

HighScore::~HighScore()
{
}
