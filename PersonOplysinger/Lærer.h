#pragma once
#include "Person.h"
#include <string>
using namespace std;

class L�rer :
	public Person
{
private:
	string fag;
public:
	L�rer(string fag = "dansk", int age = 18, string name = "Line", string lastName = "Skald", int mNr = 12345678, bool married = false, string gender = "Female");
	~L�rer();
	string getFag();
	void setKlasse(string newFag);
	void WriteToConsole();
};

