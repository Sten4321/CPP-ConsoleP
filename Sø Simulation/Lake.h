#pragma once
#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <random>
#include <cstdlib>
#include <sstream>
#include <string>
#include <iomanip>
#include <Windows.h>
#include <conio.h>
#include <thread>
#include <chrono>
#include "Lake.h"
using namespace std;

class Lake
{
public:
	Lake();
	~Lake();
	bool gamePlaying;
	int cX;
	int cY;
	int x, y;
	char grid[10][10];
	void beginGame();
private:
	void UpdateGrid();
	void MoveCursor(int x, int y);
	void Drawer(int y, int x);
	void Controls();
};

