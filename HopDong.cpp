#include "HopDong.h"
void HopDong::Nhap(){
    cout<<"\nNhap ten nguoi ";  N.Set();
    cout<<"\nNhap so ngay thue: ";  cin>>SoNgayThue;
    cout<<"\nNhap so tien boi thuong neu xe bi hu hai: ";  cin>>TienBoiThuong;
    cout<<"\nNhap ban kinh su dung cua xe";  cin>>BanKinhSuDung;
    cout<<"\nNhap gia thue xe: ";  cin>>GiaThue;
    cout<<"\nNhap loai xe da thue: ";  C.NhapL();
}
void HopDong::Xuat(){
    cout<<"\n===================================";
    cout<<"\n       HOP DONG THUE XE";
    cout<<"\nChu thue: "<<N.GetName();
    cout<<"\nLoai xe: "<<C.GetLoai();
    cout<<"\nSo tien thue: "<<GiaThue;
    cout<<"\n===================================";
}
