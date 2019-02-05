#pragma once
#include "Person.h"
#include <string>
using namespace std;

class Elever :
	public Person
{
private:
	int klasse;
public:
	Elever(int klasse = 4, int age = 18, string name = "Line", string lastName = "Skald", int mNr = 12345678, bool married = false, string gender = "Female");
	~Elever();
	int getKlasse();
	void setKlasse(int newKlasse);
	void WriteToConsole();
};

