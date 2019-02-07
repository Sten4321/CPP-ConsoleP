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
	char grid[10][10] = {
	'0','1','2','3','4','5','6','7','8','0',
	'1',' ',' ',' ',' ',' ',' ',' ',' ','1',
	'2',' ',' ',' ',' ',' ',' ',' ',' ','2',
	'3',' ',' ',' ',' ',' ',' ',' ',' ','3',
	'4',' ',' ',' ',' ',' ',' ',' ',' ','4',
	'5',' ',' ',' ',' ',' ',' ',' ',' ','5',
	'6',' ',' ',' ',' ',' ',' ',' ',' ','6',
	'7',' ',' ',' ',' ',' ',' ',' ',' ','7',
	'8',' ',' ',' ',' ',' ',' ',' ',' ','8',
	'0','1','2','3','4','5','6','7','8','9',
	};
	void beginGame(int animals);
private:
	const int width = 10;
	const int hight = 10;
	void UpdateGrid();
	void MoveCursor(int x, int y);
	void Drawer();
	void Controls();
	bool gamePlaying = true;
	int cX = 0;//curser pos
	int cY = 0;
	int x, y;
};

