#include "Human.h"
#include<iostream>
#include<string>
using namespace std;
Human::Human()
{
	SetName("");
	SetBirthDate(CDate());
	SetID("");
}
Human::Human(const string& name, int d, int m, int y, string id)
{
	SetName(name);
	SetBirthDate(CDate(d, m, y));
	SetID(id);
}
Human::~Human() {};
//Getter and Setter
void Human::SetName(string name)
{
	Name = name;
}
void Human::SetBirthDate(CDate bdate)
{
	BirthDate = bdate;
}
void Human::SetID(string id)
{
	ID = id;
}
//Others
void Human::Set()
{
	cout << "Nhap du lieu.\n";
	cout << "Ten : ";
	cin.ignore();
	string name;
	getline(cin, name);
	SetName(name);
	CDate bdate;
	cout << "Ngay sinh : ";
	cin >> bdate;
	SetBirthDate(bdate);
	cout << "ID : ";
	string id;
	cin >> id;
	SetID(id);
}
void Human::Print()
{
	cout << "Ten : " << GetName() << "\n";
	cout << "Ngay sinh : " << GetBirthDate();
	cout << "ID : " << GetID() << "\n";
}