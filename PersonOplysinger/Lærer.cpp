#include "pch.h"
#include "L�rer.h"
#include <string>
#include <iostream>
using namespace std;


string fag;

L�rer::L�rer(string fag, int age, string name, string lastName, int mNr, bool married, string gender) : Person(age, name, lastName, mNr, married, gender)
{
	this->fag = fag;
}


L�rer::~L�rer()
{
}

string L�rer::getFag()
{
	return fag;
}

void L�rer::setKlasse(string newFag)
{
	fag = newFag;
}

void L�rer::WriteToConsole()
{
	cout << "Underviser i " << fag << ", ";
	Person::WriteToConsole();
}
