#include "NhanVien.h"

const int LUONG_CO_BAN = 1000;

class NhanVienVanPhong : public NhanVien
{
    private:
        double phucap;
        double heso;
    public:
        NhanVienVanPhong();
        NhanVienVanPhong(const NhanVienVanPhong& other);
        ~NhanVienVanPhong();
        virtual void NhapNhanVien() override;
        virtual double TinhLuong() override;
        void operator=(const NhanVienVanPhong& other);
        virtual void HamAo() override;
};