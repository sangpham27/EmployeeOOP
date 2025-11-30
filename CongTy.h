#include <iostream>
#include "NhanVien.h"
#include "NhanvienSanXuat.h"
#include "NhanVienVanPhong.h"
using namespace std;

class CongTy
{
    private:
        NhanVien* danhSachNhanVien[100];
        int soLuongNhanVien;
    public:
        CongTy();
        ~CongTy();
        void NhapCongTy();
        double TinhTongLuongCongTy();
};