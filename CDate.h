#pragma once
#include<iostream>
#include<iomanip>

using namespace std;
class CDate
{
private:
	int Ngay, Thang, Nam;
public:
    void Nhapntn();
	CDate(int d = 0, int m = 0, int y = 0) :
		Ngay(d), Thang(m), Nam(y) {};
	bool isLeapYear();
	int toDays();
	CDate operator + (int d);
	CDate operator - (int d);
	CDate operator ++ (int);
	CDate operator --(int);
	CDate operator ++();
	CDate operator --();

	friend int operator - (CDate a, CDate b);

	friend bool operator == (const CDate& a, const CDate& b);
	friend bool operator > (const CDate& a, const CDate& b);
	friend bool operator < (const CDate& a, const CDate& b);
	friend istream& operator >> (istream& is, CDate& a);
	friend ostream& operator << (ostream& os, const CDate& a);
};

