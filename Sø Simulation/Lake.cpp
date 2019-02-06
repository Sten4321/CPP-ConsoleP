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

bool gamePlaying = true;
int cX = 0;//curser pos
int cY = 0;
int x, y;

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



void Lake::UpdateGrid()
{
	for (size_t y = 1; y < 10; y++)
	{
		for (size_t x = 1; x < 10; x++)
		{
			grid[y][x];
		}
	}
}


void Lake::MoveCursor(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void Lake::Drawer(int y, int x)
{
	for (size_t y = 0; y < 10; y++)
	{
		for (size_t x = 0; x < 10; x++)
		{
			if (y == cY && x == cX)
			{
				cout << " # ";//draw curser
			}
			else
			{
				cout << (char)grid[y][x] << " ";//draw grid
			}
		}
		cout << endl;
	};
}


void Lake::Controls()
{
	cout << "\n\n\n";

	cout << "Player 1!: Write where you want to place your X";
	cin >> x;
	cin >> y;
	Drawer(y, x);
	cin;
	//Får tråden til at sove!
	Sleep(17);

}

void Lake::beginGame()
{
	UpdateGrid();
	Drawer(0, 0);
	while (gamePlaying = true)
	{
		Controls();
	}
}

Lake::Lake()
{

}


Lake::~Lake()
{
}