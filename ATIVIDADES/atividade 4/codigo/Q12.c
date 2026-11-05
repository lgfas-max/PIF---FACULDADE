#include <stdio.h>
int main() {
int opcao;
printf("Digite o primeiro numero entre 1 e 7: ");
scanf("%d", &opcao);
switch (opcao) {

    case 1:
    printf("Domingo\n");
    break;
    case 2:
    printf("Segunda-feira\n");
    case 3:
    printf("Terca-feira\n");
    break;
    case 4:
    printf("Quarta-feira\n");
    break;
    case 5:
    printf("Quinta-feira\n");
    break;
    case 6:
    printf("Sexta-feira\n");
    break;
    case 7:
    printf("Sabado\n");
    break;
    default:
    printf("Opcao invalida\n");
}
    return 0;
}