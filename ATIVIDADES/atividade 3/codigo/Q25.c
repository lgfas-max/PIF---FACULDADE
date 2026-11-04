#include <stdio.h>

int main() {
    int n, i, divisores = 0;
    printf("Informe um inteiro positivo: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            divisores++;
    }
    printf("Divisores encontrados: %d\n", divisores);
    if (n > 1 && divisores == 2)
        printf("%d e primo.\n", n);
    else
        printf("%d nao e primo.\n", n);
    return 0;
}