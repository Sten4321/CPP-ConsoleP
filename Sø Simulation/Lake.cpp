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

void Lake::UpdateGrid()
{
	for (int y = 0; y < hight; y++)
	{
		for (int x = 0; x < width; x++)
		{
			grid[y][x];//TODO: add functions here
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

void Lake::Drawer()
{
	for (int y = 0; y < hight; y++)
	{
		for (int x = 0; x < width; x++)
		{
			if (y == cY && x == cX)//TODO: change to draw animals instead
			{
				cout << "# ";//draw curser
			}
			else
			{
				cout << grid[x][y] << " ";//draw grid
			}
		}
		cout << endl;
	};
}


void Lake::Controls()
{
	cout << "Player 1!: Write where you want to place your X";
	cout << endl;
	cin >> x;
	cin >> y;
	x--;
	y--;
#pragma region hide if
	if (x > width)
	{
		x = 9;
	}
	else if (x < 0)
	{
		x = 0;
	}
	if (y > hight)
	{
		y = 9;
	}
	else if (y < 0)
	{
		y = 0;
	}
#pragma endregion
	Drawer();
	cin;
	//Får tråden til at sove!
	Sleep(17);
}

void Lake::beginGame(int animals)
{
	char *pAnimalArray = new char[animals];
	MoveCursor(0, 0);
	UpdateGrid();
	Drawer();
	while (gamePlaying = true)
	{
		Controls();
	}
	delete[] pAnimalArray;
	pAnimalArray = nullptr;
}

Lake::Lake()
{

}


Lake::~Lake()
{
}