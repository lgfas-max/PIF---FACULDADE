#include <stdio.h>

int main() {
    int n, i;
    long long int fat = 1;

    printf("Informe N: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: fatorial nao existe para numero negativo.\n");
        return 1;
    }
    if (n > 20) {
        printf("Aviso: acima de 20 ocorre estouro de long long.\n");
    }
    for (i = 2; i <= n; i++)
        fat *= i;      /* 0! e 1! ficam com 1 */

    printf("%d! = %lld\n", n, fat);
    return 0;
}