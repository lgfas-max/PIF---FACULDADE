#include <stdio.h>

int main() {
char caractere;
    
printf("Digite um caractere: ");
scanf(" %c", &caractere);

// O valor impresso com %d representa o codigo numerico equivalente 
// do caractere de 1 byte segundo a Tabela ASCII (American Standard Code for Information Interchange).
    
printf("Caractere: %c | Codigo ASCII: %d\n", caractere, caractere);
    
return 0;
}