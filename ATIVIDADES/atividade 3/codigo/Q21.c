#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char secreta, palpite;
    int tentativas = 0;

    srand(time(NULL));
    secreta = rand() % 26 + 'a';

    printf("Adivinhe a letra minuscula (a-z)!\n");
    do {
        printf("Seu palpite: ");
        scanf(" %c", &palpite);
        tentativas++;
        if (palpite < secreta)
            printf("A letra secreta vem DEPOIS de '%c'.\n", palpite);
        else if (palpite > secreta)
            printf("A letra secreta vem ANTES de '%c'.\n", palpite);
    } while (palpite != secreta);

    printf("Parabens! A letra era '%c'. Tentativas: %d\n", secreta, tentativas);
    return 0;
}