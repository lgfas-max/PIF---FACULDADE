#include <stdio.h>

#define DOBRO_ERRADO(x) x*2
#define DOBRO_CORRETO(x) ((x)*2)

int dobro(int x) {
return x * 2;
}

int main() {    
printf("Macro DOBRO_ERRADO de 2+3 = %d\n", DOBRO_ERRADO(2+3));
printf("Funcao dobro() de 2+3 = %d\n", dobro(2+3));
    
/* EXPLICACÃO DA DIFERENÇA:
   A macro faz uma substituição de texto literal. DOBRO_ERRADO(2+3) 
   vira 2+3*2. Pela precedência matemática, 3*2 é calculado primeiro,
   resultando em 2+6 = 8.
   
   A função calcula o valor da expressão antes de passar o parâmetro. 
   2+3 vira 5, e a função retorna 5 * 2 = 10.
*/
    
    printf("Macro DOBRO_CORRETO de 2+3 = %d\n", DOBRO_CORRETO(2+3));
    
    return 0;
}