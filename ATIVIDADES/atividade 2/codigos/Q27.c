#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
// Inicializa a semente pseudoaleatoria com o tempo atual
srand(time(NULL));

// rand() % 6 gera valores entre 0 e 5. Somando +1 resulta na faixa [1, 6].
int dado1 = 1 + (rand() % 6);
int dado2 = 1 + (rand() % 6);
int dado3 = 1 + (rand() % 6);

printf("Resultado do Dado 1: %d\n", dado1);
printf("Resultado do Dado 2: %d\n", dado2);
printf("Resultado do Dado 3: %d\n", dado3);

return 0;
}