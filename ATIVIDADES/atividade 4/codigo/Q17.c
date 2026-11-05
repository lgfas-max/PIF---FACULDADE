#include <stdio.h>

int main() {
    float valor, valor_final, comissao;
    int opcao;

    printf("Valor da compra e opcao (1-A vista, 2-Parcelado 3x): ");
    scanf("%f %d", &valor, &opcao);

    if (opcao == 1) {
        valor_final = valor * 0.90;
        comissao = valor_final * 0.05;
        printf("A vista com desconto: R$ %.2f\n", valor_final);
    } else if (opcao == 2) {
        valor_final = valor;
        comissao = valor * 0.05;
        printf("3 parcelas de: R$ %.2f (Total: R$ %.2f)\n", valor / 3.0, valor_final);
    } else {
        printf("Opcao invalida.\n");
        return 1;
    }
    
    printf("Comissao do vendedor: R$ %.2f\n", comissao);
    return 0;
}