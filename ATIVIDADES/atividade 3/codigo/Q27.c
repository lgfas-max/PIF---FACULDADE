#include <stdio.h>

/* Com cedulas de 2 e 5 e impossivel pagar R$ 1 e R$ 3. O metodo guloso
   puro falha em valores como 8 ou 13, entao so se usa uma cedula se o
   que sobrar nao for 1 nem 3. */
int main() {
    int valor, i, qtd;
    int notas[6] = {100, 50, 20, 10, 5, 2};

    printf("Valor do saque (R$): ");
    scanf("%d", &valor);

    if (valor <= 0 || valor == 1 || valor == 3) {
        printf("Valor impossivel de compor com as cedulas disponiveis.\n");
        return 1;
    }

    for (i = 0; i < 6; i++) {
        qtd = 0;
        while (valor >= notas[i] &&
               valor - notas[i] != 1 && valor - notas[i] != 3) {
            valor -= notas[i];
            qtd++;
        }
        if (qtd > 0)
            printf("%d cedula(s) de R$ %d\n", qtd, notas[i]);
    }
    return 0;
}