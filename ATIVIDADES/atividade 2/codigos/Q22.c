#include <stdio.h>

int main() {
char maiuscula;
    
printf("Digite uma letra maiuscula: ");
scanf(" %c", &maiuscula);

// O deslocamento constante entre maiusculas e minusculas na Tabela ASCII e de 32 posicoes
char minuscula = maiuscula + ('a' - 'A'); // Equivale a: maiuscula + 32

printf("Letra minuscula correspondente: %c\n", minuscula);
    
return 0;
}