#include <stdio.h>
#include <math.h>
int main() {   
int opcao, num1, num2, resul;
printf("escolha entre as operacoes abaixo:\n");
printf("1 - soma\n");
printf("2 - Subtracao\n");
printf("3 - Multiplicacao\n");
printf("4 - Divisao\n");
printf("5 - Potenciacao\n");
printf("Digite a opcao desejada: ");
scanf("%d", &opcao);
if (opcao < 1 || opcao > 5) {
    printf("Opcao invalida!\n");
    return 0;
}
printf("Digite o primeiro numero: ");
scanf("%d", &num1);
printf("Digite o segundo numero: ");
scanf("%d", &num2);
switch (opcao) {
    case 1:
        printf("Resultado: %d\n", num1 + num2);
        break;
    case 2:
        printf("Resultado: %d\n", num1 - num2);
        break;
    case 3:
        printf("Resultado: %d\n", num1 * num2);
        break;
    case 4:
        if (num2 != 0) {
            printf("Resultado: %.2f\n", (float)num1 / num2);
        } else {
            printf("Erro: Divisão por zero!\n");
        }
        break;
    case 5:
        resul = round(pow(num1, num2));
        printf("Resultado: %d\n", resul);
        break;
}
    return 0;
}