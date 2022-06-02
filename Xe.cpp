#include "Xe.h"
void Xe::SetLoai(string loai)  {  Loai = loai;  }
string Xe::GetLoai()  {  return Loai; }

void Xe::SetNamSX(int nam)  { NamSX = nam; }
int Xe::GetNamSX()  {  return NamSX;  }

void Xe::Nhap(){
		cout<<"\nNhap loai xe: ";  cin>>Loai;
        cout<<"\nNhap nam san xuat: ";  cin>>NamSX;
	}
void Xe::Xuat(){
		cout<<"\nLoai: "<<Loai<<" = "<<"Nam san xuat: "<<NamSX;
}

void Xe::NhapL(){
    cout<<"\nNhap loai xe: ";  cin>>Loai;
}
void Xe::NhapN(){
    cout<<"\nNhap nam san xuat: ";  cin>>NamSX;
}
