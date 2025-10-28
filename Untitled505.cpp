#include <stdio.h>

int main() {
    const int GIA_VE_CO_SO = 20000;
    int tuoi;
    double giaVe;

    printf("Nhap tuoi cua khach hang: ");
    scanf("%d", &tuoi);

    if (tuoi < 0 || tuoi > 150) {
        printf("Tuoi khong hop le\n");
    } else {
        if (tuoi < 6) {
            giaVe = 0;
        } else if (tuoi >= 6 && tuoi <= 18) {
            giaVe = GIA_VE_CO_SO * 0.5;
        } else if (tuoi >= 19 && tuoi <= 60) {
            giaVe = GIA_VE_CO_SO;
        } else { // tuoi > 60
            giaVe = GIA_VE_CO_SO * 0.7;
        }
        printf("So tien ve: %.0f VNÐ\n", giaVe);
    }

    return 0;
}
