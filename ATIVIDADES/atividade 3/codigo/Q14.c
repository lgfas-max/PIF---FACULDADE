#include <stdio.h>

int main() {
    int i;
    long soma = 0;
    for (i = 1; i <= 100; i++) {
        printf("%d -> %d\n", i, i * i);
        soma += i * i;
    }
    printf("Soma total dos quadrados: %ld\n", soma);   /* 338350 */
    return 0;
}