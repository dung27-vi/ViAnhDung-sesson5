#include <stdio.h>

int main() {
    float thu_nhap, thue_phai_dong;

    printf("Nhap muc thu nhap 1 thang (trieu dong): ");
    scanf("%f", &thu_nhap);

    if (thu_nhap <= 5) {
        thue_phai_dong = thu_nhap * 0.05;
    } else if (thu_nhap > 5 && thu_nhap <= 10) {
        thue_phai_dong = thu_nhap * 0.10;
    } else {
        thue_phai_dong = thu_nhap * 0.15;
    }

    printf("So tien thue phai dong la: %.2f trieu dong\n", thue_phai_dong);

    return 0;
}
