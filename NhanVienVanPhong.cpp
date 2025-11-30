#include "NhanVienVanPhong.h"

NhanVienVanPhong::NhanVienVanPhong(/* args */)
{
}

NhanVienVanPhong::NhanVienVanPhong(const NhanVienVanPhong& other) : NhanVien(other) {
    phucap = other.phucap;
    heso = other.heso;
}

NhanVienVanPhong::~NhanVienVanPhong()
{
}

double NhanVienVanPhong::TinhLuong() 
{
    return heso * LUONGCOBAN + phucap;
}

void NhanVienVanPhong::NhapNhanVien()
{
    NhanVien::NhapNhanVien();
    cout << "Nhap he so: ";
    cin >> heso;
    cout << "Nhap phu cap: ";
    cin >> phucap;
    cin.ignore();
}

void NhanVienVanPhong::operator=(const NhanVienVanPhong& other) {
    if (this != &other) {
        NhanVien::operator=(other);
        phucap = other.phucap;
        heso = other.heso;
    }
}

void NhanVienVanPhong::HamAo() {
    cout << "Ham ao trong NhanVienVanPhong" << endl;
}