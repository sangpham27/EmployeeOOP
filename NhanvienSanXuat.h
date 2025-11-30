#ifndef NHANVIEN_SAN_XUAT_H
#define NHANVIEN_SAN_XUAT_H

#include <string>
#include <iostream>
#include "NhanVien.h"
using namespace std;
const int HE_SOLUONG = 10;
class NhanVienSanXuat : public NhanVien
{
private:
    int sosanpham;
public:
    NhanVienSanXuat(/* args */);
    NhanVienSanXuat(const NhanVienSanXuat& other);
    ~NhanVienSanXuat();
    virtual void NhapNhanVien() override;
    virtual double TinhLuong() override;
    void operator=(const NhanVienSanXuat& other);
    virtual void HamAo() override;
};

#endif // NHANVIEN_SAN_XUAT_H