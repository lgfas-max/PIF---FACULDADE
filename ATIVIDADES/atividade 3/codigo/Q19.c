#include <stdio.h>

int main() {
    int n, i;
    long long a = 1, b = 1, prox = 1;

    printf("Informe o numero do termo (N >= 1): ");
    scanf("%d", &n);
    if (n < 1) {
        printf("N invalido.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        if (i <= 2) {
            prox = 1;
        } else {
            prox = a + b;
            a = b;
            b = prox;
        }
        printf("%lld ", prox);
    }
    printf("\nTermo %d = %lld\n", n, prox);
    return 0;
}