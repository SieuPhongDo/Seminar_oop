#pragma once
#include"Xe.h"
#include"Human.h"
class HopDong
{
private:
	Xe C;
	int GiaThue;
	int SoNgayThue;
	int TienBoiThuong;
	int BanKinhSuDung;
	Human N;
public:
	HopDong();
	~HopDong();
	void Nhap();
	void Xuat();
};

