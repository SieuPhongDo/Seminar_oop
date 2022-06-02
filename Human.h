#pragma once
#include"CDate.h"
class Human
{
private:
	string Name;
	CDate BirthDate;
	string ID;
public:
	Human();
	Human(const string& name, int d, int m, int y, string id);
	Human(const string& name, CDate bdate, string id);
	~Human();

	string GetName() { return Name; }
	CDate GetBirthDate() { return BirthDate; }
	string GetID() { return ID; }

	void SetName(string name);
	void SetBirthDate(CDate bdate);
	void SetID(string  ID);
	virtual void Set();

	virtual void Print();
};
