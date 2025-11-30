#include "CongTy.h"

CongTy::CongTy(){}

CongTy::~CongTy(){}

void CongTy::NhapCongTy()
{
    cout << "Nhap so luong nhan vien: ";
    cin >> soLuongNhanVien;
    cin.ignore();
    for (int i = 0; i < soLuongNhanVien; i++)
    {
        int loai;
        cout << "Nhap loai Nhan Vien (1: Van Phong, 2: San xuat): ";
        cin >> loai;
        cin.ignore();
        if (loai == 1) {
            danhSachNhanVien[i] = new NhanVienVanPhong();
        }
        if (loai == 2) {
            danhSachNhanVien[i] = new NhanVienSanXuat();
        }
        danhSachNhanVien[i]->NhapNhanVien();
    }
    
}

double CongTy::TinhTongLuongCongTy()
{
    double tongLuong = 0;
    for (int i = 0; i < soLuongNhanVien i++)
    {
        tongLuong += danhSachNhanVien[i]->TinhLuong();
    }
    return tongLuong;
}