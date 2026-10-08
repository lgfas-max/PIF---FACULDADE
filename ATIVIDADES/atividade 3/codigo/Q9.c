#include <stdio.h>

int main() {
    float valor, soma = 0.0;
    int qtd = 0;

    printf("Digite valores positivos (negativo para parar):\n");
    scanf("%f", &valor);
    while (valor >= 0) {
        soma += valor;
        qtd++;
        scanf("%f", &valor);
    }

    printf("Quantidade: %d\n", qtd);
    printf("Soma: %.2f\n", soma);
    if (qtd > 0)
        printf("Media: %.2f\n", soma / qtd);
    else
        printf("Nenhum valor valido informado.\n");
    return 0;
}