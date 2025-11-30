#include <iostream>
using namespace std;

class NhanVien
{
    private:
        string hoten;
        string diachi;
    public:
        NhanVien();
        NhanVien(const NhanVien& other);
        ~NhanVien();
        virtual void NhapNhanVien();
        void operator=(const NhanVien& other);
        virtual void HamAo();
        // Ham Thuan ao
        virtual double TinhLuong() = 0;
        
};