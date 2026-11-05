#include <stdio.h>

int main() {
    float nota;
    int faltas;
    char conceito;

    printf("Digite a nota (0.0 a 10.0): ");
    scanf("%f", &nota);
    printf("Digite o numero de faltas: ");
    scanf("%d", &faltas);

    if (nota >= 9.0 && nota <= 10.0) {
        conceito = (faltas <= 20) ? 'A' : 'B';
    } else if (nota >= 7.5 && nota <= 8.9) {
        conceito = (faltas <= 20) ? 'B' : 'C';
    } else if (nota >= 5.0 && nota <= 7.4) {
        conceito = (faltas <= 20) ? 'C' : 'D';
    } else if (nota >= 4.0 && nota <= 4.9) {
        conceito = (faltas <= 20) ? 'D' : 'E';
    } else if (nota >= 0.0 && nota <= 3.9) {
        conceito = 'E';
    } else {
        printf("Nota invalida!\n");
        return 1;
    }

    printf("Conceito final: %c\n", conceito);
    return 0;
}