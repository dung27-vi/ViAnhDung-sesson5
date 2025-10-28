#include <stdio.h>

int main() {
    int so_met_khoi;
    long long tong_tien = 0;

    printf("Nhap so met khoi nuoc da su dung trong thang: ");
    scanf("%d", &so_met_khoi);

    if (so_met_khoi > 0) {
        if (so_met_khoi <= 10) {
            tong_tien += so_met_khoi * 6000;
        } else {
            tong_tien += 10 * 6000;
            if (so_met_khoi <= 20) {
                tong_tien += (so_met_khoi - 10) * 7000;
            } else {
                tong_tien += 10 * 7000;
                if (so_met_khoi <= 30) {
                    tong_tien += (so_met_khoi - 20) * 8500;
                } else {
                    tong_tien += 10 * 8500;
                    tong_tien += (so_met_khoi - 30) * 10000;
                }
            }
        }
    }

    printf("Tong so tien phai tra la: %lld VND\n", tong_tien);

    return 0;
}
