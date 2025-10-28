#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Nhap so thuc a: ");
    scanf("%f", &a);

    printf("Nhap so thuc b: ");
    scanf("%f", &b);

    printf("Nhap mot toan tu (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("Ket qua: %.2f + %.2f = %.2f\n", a, b, a + b);
            break;
        case '-':
            printf("Ket qua: %.2f - %.2f = %.2f\n", a, b, a - b);
            break;
        case '*':
            printf("Ket qua: %.2f * %.2f = %.2f\n", a, b, a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Loi: Khong the chia cho 0\n");
            } else {
                printf("Ket qua: %.2f / %.2f = %.2f\n", a, b, a / b);
            }
            break;
        default:
            printf("Loi: Toan Tu khong Hop Le \n");
    }

    return 0;
}
