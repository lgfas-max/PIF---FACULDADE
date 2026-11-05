#include <stdio.h>

int main() {
    int a, b, c;
    printf("Angulos internos: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b + c == 180) {
        if (a == 90 || b == 90 || c == 90) {
            printf("Triangulo Retangulo\n");
        } else if (a > 90 || b > 90 || c > 90) {
            printf("Triangulo Obtusangulo\n");
        } else {
            printf("Triangulo Acutangulo\n");
        }
    } else {
        printf("Nao formam um triangulo valido (soma != 180).\n");
    }
    return 0;
}