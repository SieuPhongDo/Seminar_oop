#pragma once
#include<iostream>
#include<string>
using namespace std;
class Xe
{
	public:
	string Loai;
	int NamSX;
	Xe(string loai = "", int nam = 0);
	~Xe();

	string GetLoai();
	int GetNamSX();

	void SetLoai(string loai);
	void SetNamSX(int nam);
	void Nhap();
	void Xuat();
	void NhapL();
	void NhapN();
};

