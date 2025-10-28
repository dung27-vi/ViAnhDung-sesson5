#include <stdio.h>
#include <math.h>

int main() {
    int kWh, loaiHo;
    double tienBacThang = 0, phuPhi = 0, tongTien = 0;

    printf("Nhap so kWh dien tieu thu trong thang: ");
    scanf("%d", &kWh);
    printf("Nhap loai ho tieu dung (1: Ho gia dinh, 2: Ho kinh doanh, 3: Ho san xuat): ");
    scanf("%d", &loaiHo);

    if (kWh <= 50) {
        tienBacThang = kWh * 1500;
    } else if (kWh <= 100) {
        tienBacThang = 50 * 1500 + (kWh - 50) * 2000;
    } else if (kWh <= 200) {
        tienBacThang = 50 * 1500 + 50 * 2000 + (kWh - 100) * 2500;
    } else {
        tienBacThang = 50 * 1500 + 50 * 2000 + 100 * 2500 + (kWh - 200) * 3000;
    }

    switch (loaiHo) {
        case 1: // Ho gia dinh
            phuPhi = tienBacThang * 0.05;
            break;
        case 2: // Ho kinh doanh
            phuPhi = tienBacThang * 0.10;
            break;
        case 3: // Ho san xuat
            phuPhi = tienBacThang * 0.08;
            break;
        default:
            printf("Loai ho tieu dung khong hop le.\n");
            return 1;
    }

    tongTien = tienBacThang + phuPhi;
    printf("Tong tien dien phai tra: %.0f VND\n", tongTien);

    return 0;
}
