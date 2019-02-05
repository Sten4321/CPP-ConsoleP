#pragma once
#include "Person.h"
#include <string>
using namespace std;

class Lærer :
	public Person
{
private:
	string fag;
public:
	Lærer(string fag = "dansk", int age = 18, string name = "Line", string lastName = "Skald", int mNr = 12345678, bool married = false, string gender = "Female");
	~Lærer();
	string getFag();
	void setKlasse(string newFag);
	void WriteToConsole();
};

