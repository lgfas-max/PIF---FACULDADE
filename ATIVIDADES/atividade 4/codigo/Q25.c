#include <stdio.h>

int main() {
    int total, pago, troco, notas;
    printf("Total e valor pago: ");
    scanf("%d %d", &total, &pago);

    troco = pago - total;

    if (troco < 0) {
        printf("Valor insuficiente!\n");
    } else {
        printf("Troco: R$ %d\n", troco);
        notas = troco / 100; troco %= 100; if(notas) printf("%d nota(s) de 100\n", notas);
        notas = troco / 50; troco %= 50;   if(notas) printf("%d nota(s) de 50\n", notas);
        notas = troco / 20; troco %= 20;   if(notas) printf("%d nota(s) de 20\n", notas);
        notas = troco / 10; troco %= 10;   if(notas) printf("%d nota(s) de 10\n", notas);
        notas = troco / 5; troco %= 5;     if(notas) printf("%d nota(s) de 5\n", notas);
        notas = troco / 2; troco %= 2;     if(notas) printf("%d nota(s) de 2\n", notas);
    }
    return 0;
}