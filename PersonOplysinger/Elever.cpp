#include "pch.h"
#include "Elever.h"
#include <string>
#include <iostream>
using namespace std;

int klasse;

Elever::Elever(int klasse, int age, string name, string lastName, int mNr, bool married, string gender) :Person(age, name, lastName, mNr, married, gender)
{
	this->klasse = klasse;
}

Elever::~Elever()
{
}

int Elever::getKlasse()
{
	return klasse;
}

void Elever::setKlasse(int newKlasse)
{
	klasse = newKlasse;
}

void Elever::WriteToConsole()
{
	cout << "Elev i: " << klasse << ". klasse, ";
	Person::WriteToConsole();
}
