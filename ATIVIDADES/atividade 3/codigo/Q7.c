#include <stdio.h>

void versaoFor(void) {
    int i;
    for (i = 0; i <= 100; i++)
        printf("%d ", i);
    printf("\n");
}

void versaoWhile(void) {
    int i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
}

void versaoDoWhile(void) {
    int i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n");
}

int main() {
    versaoFor();
    versaoWhile();
    versaoDoWhile();
    return 0;
}

//Resposta: o for e o mais adequado, pois o numero de repeticoes e
//conhecido (0 a 100) e inicializacao, teste e incremento ficam
//reunidos em uma unica linha, deixando o codigo mais curto e legivel