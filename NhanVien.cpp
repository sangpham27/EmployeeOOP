#include "NhanVien.h"

NhanVien::NhanVien(){}

NhanVien::~NhanVien(){}

NhanVien::NhanVien(const NhanVien& other){
    hoten = other.hoten;
    diachi = other.diachi;
}

void NhanVien::NhapNhanVien(){
    cout << "Nhap Nhan Vien: ";
    getline(cin, hoten);
    cout << "Nhap dia chi: ";
    getline(cin, diachi);
}

void NhanVien::operator=(const NhanVien& other) {
    if (this != &other) {
        hoten = other.hoten;
        diachi = other.diachi;
    }
}

void NhanVien::HamAo() {
    cout << "Ham ao trong NhanVien" << endl;
}
