#include <stdio.h>

int main() {
    int dias;
    double bruto, gratificacao, imposto, liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    bruto = dias * 45.00;
    gratificacao = bruto * 0.05;
    imposto = bruto * 0.08;
    liquido = bruto + gratificacao - imposto;

    printf("\n===== HOLERITE =====\n");
    printf("Dias trabalhados : %d\n", dias);
    printf("Salario bruto    : R$ %.2lf\n", bruto);
    printf("Gratificacao 5%%  : R$ %.2lf\n", gratificacao);
    printf("Imposto 8%%       : R$ %.2lf\n", imposto);
    printf("Valor liquido    : R$ %.2lf\n", liquido);
    printf("====================\n");

    return 0;
}