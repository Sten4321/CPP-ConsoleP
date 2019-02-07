#include "pch.h"
#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(int age, string name, string lastName, int cpr, bool married, string gender)
{
	this->age = age;
	this->name = name;
	this->lastName = lastName;
	this->mNr = cpr;
	this->married = married;
	this->gender = gender;
}


Person::~Person()
{
}


void Person::WriteToConsole()
{
	cout << "Name: " << name << ", " << lastName << ", Age: " << age << ", Mobile Nr: " << mNr << ", gender " << gender << ", married: " << married << ".\n";
}

int Person::getAge() const
{
	return age;
}

void Person::setAge(int newAge)
{
	age = newAge;
}

string Person::getName() const
{
	return name;
}

void Person::setName(string newName)
{
	name = newName;
}

string Person::getLastName() const
{
	return lastName;
}

void Person::setLastName(string newlastName)
{
	lastName = newlastName;
}

int Person::getmNr() const
{
	return mNr;
}

void Person::setmNr(int newmNr)
{
	mNr = newmNr;
}

bool Person::getMarried() const
{
	return married;
}

void Person::setMarried(bool newMarried)
{
	married = newMarried;
}

string Person::getGender() const
{
	return gender;
}

void Person::setGender(string newGender)
{
	gender = newGender;
}
