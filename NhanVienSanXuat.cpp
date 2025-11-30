#include "NhanVienSanXuat.h"

NhanVienSanXuat::NhanVienSanXuat(/* args */)
{
}

NhanVienSanXuat::NhanVienSanXuat(const NhanVienSanXuat& other) : NhanVien(other) {
    sosanpham = other.sosanpham;
}

NhanVienSanXuat::~NhanVienSanXuat()
{
}

double NhanVienSanXuat::TinhLuong()
{
    return sosanpham * HE_SOLUONG;
}

void NhanVienSanXuat::NhapNhanVien()
{
    NhanVien::NhapNhanVien();
    cout << "Nhap so san pham: ";
    cin >> sosanpham;
    cin.ignore();
}
void NhanVienSanXuat::operator=(const NhanVienSanXuat& other) {
    if (this != &other) {
        NhanVien::operator=(other);
        sosanpham = other.sosanpham;
    }
}
void NhanVienSanXuat::HamAo() {
    cout << "Ham ao trong   NhanVienSanXuat" << endl;
}