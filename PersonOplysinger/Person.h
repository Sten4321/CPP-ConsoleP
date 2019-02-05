#pragma once
#include <string>
using namespace std;

class Person
{
public:
	Person(int age = 18, string name = "Line", string lastName = "Skald", int mNr = 12345678, bool married = false, string gender = "Female");
	~Person();
private:
	int age;
	string name;
	string lastName;
	int mNr;
	bool married;
	string gender;
public:
	int getAge() const;
	void setAge(int newAge);
	string getName() const;
	void setName(string newName);
	string getLastName() const;
	void setLastName(string newlastName);
	int getmNr() const;
	void setmNr(int newmNr);
	bool getMarried() const;
	void setMarried(bool newMarried);
	string getGender() const;
	void setGender(string newGender);
	virtual void WriteToConsole();
};

