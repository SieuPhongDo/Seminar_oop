#include "CDate.h"
using namespace std;
bool CDate::isLeapYear()
{
	if (Nam % 400 == 0)
		return true;
	if (Nam % 4 == 0 && Nam % 100 != 0)
		return true;
	return false;
}

void CDate::Nhapntn(){
	cout<<"\nNhap ngay: ";   cin>>Ngay;
	cout<<"\nNhap thang: ";  cin>>Thang;
	cout<<"\nNhap nam: ";  cin>>Nam;
}


CDate CDate::operator+(int d)
{
	CDate res = *this;
	while (d--)
	{
		res.Ngay++;
		switch (res.Thang)
		{
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
		{
			if (res.Ngay > 31)
			{
				res.Ngay %= 31;
				res.Thang++;
				if (res.Thang > 12)
				{
					res.Thang = 1;
					res.Nam++;
				}
			}
			break;
		}
		case 4:case 6:case 9:case 11:
		{
			if (res.Ngay > 30)
			{
				res.Ngay %= 30;
				res.Thang++;
			}
			break;
		}
		case 2:
		{
			int Days = 28;
			if (this->isLeapYear())
				Days = 29;
			if (res.Ngay > Days)
			{
				res.Ngay %= Days;
				res.Thang++;
			}
		}
		}
	}
	return res;
}
CDate CDate::operator-(int d)
{
	CDate res = *this;
	while (d--)
	{
		res.Ngay--;
		if (res.Ngay > 0) continue;
		switch (res.Thang)
		{
		case 2:case 4:case 6:case 8:case 9:case 11:case 1:
		{
			res.Ngay = 31;
			res.Thang--;
			if (res.Thang <= 0)
			{
				res.Thang = 12;
				res.Nam--;
			}
			break;
		}
		case 5:case 7:case 10:case 12:
		{
			res.Ngay = 30;
			res.Thang--;
			break;
		}
		case 3:
		{
			int Days = 28;
			if (this->isLeapYear())
				Days = 29;
			res.Ngay = Days;
			res.Thang--;
		}
		}
	}
	return res;
}
CDate CDate::operator++()
{
	*this = (*this) + 1;
	return *this;
}
CDate CDate::operator++(int)
{
	CDate temp = *this;
	*this = (*this) + 1;
	return temp;
}
CDate CDate::operator--()
{
	*this = (*this) - 1;
	return *this;
}
CDate CDate::operator--(int)
{
	CDate temp = *this;
	*this = (*this) - 1;
	return temp;
}
bool operator == (const CDate& a, const CDate& b)
{
	if (a.Ngay != b.Ngay)
		return false;
	if (a.Thang != b.Thang)
		return false;
	if (a.Nam != b.Nam)
		return false;
	return true;
}
bool operator > (const CDate& a, const CDate& b)
{
	if (a.Nam == b.Nam)
	{
		if (a.Thang == b.Thang)
		{
			return a.Ngay > b.Ngay;
		}
		else
			return a.Thang > b.Thang;
	}
	else return a.Nam > b.Nam;
}
bool operator < (const CDate& a, const CDate& b)
{
	return !(a > b || a == b);
}
int operator - (CDate a, CDate b)
{
	bool sw = false;
	if (a < b) swap(a, b), sw = true;
	int cnt = 0;
	while (!(a == b))
	{
		a--;
		cnt++;
	}
	if (sw) return -cnt;
	return cnt;
}
ostream& operator << (ostream& os, const CDate& a)
{
	cout << fixed << setfill('0') << setw(2) << a.Ngay << "/";
	cout << fixed << setfill('0') << setw(2) << a.Thang << "/";
	cout << fixed << setfill('0') << setw(4) << a.Nam << "\n";
	return os;
}
istream& operator >> (istream& is, CDate& a)
{
	cout << "Nhap ngay:"; cin >> a.Ngay;
	cout << "Nhap thang:"; cin >> a.Thang;
	cout << "Nhap nam:"; cin >> a.Nam;
	return is;
}