#include "pch.h"
#include "Lærer.h"
#include <string>
#include <iostream>
using namespace std;


string fag;

Lærer::Lærer(string fag, int age, string name, string lastName, int mNr, bool married, string gender) : Person(age, name, lastName, mNr, married, gender)
{
	this->fag = fag;
}


Lærer::~Lærer()
{
}

string Lærer::getFag()
{
	return fag;
}

void Lærer::setKlasse(string newFag)
{
	fag = newFag;
}

void Lærer::WriteToConsole()
{
	cout << "Underviser i " << fag << ", ";
	Person::WriteToConsole();
}
