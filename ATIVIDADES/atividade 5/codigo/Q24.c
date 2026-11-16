#include <stdio.h>
#define DEBUG

int somaAteN(int n) {
int soma = 0;
for (int i = 1; i <= n; i++) {
    soma += i;
        
    #ifdef DEBUG
    // Este código só existe no executável final se a macro DEBUG estiver definida.
    printf("[DEBUG] Iteracao %d | Soma parcial = %d\n", i, soma);
    #endif
}
return soma;
}

int main() {
int resultado = somaAteN(5);
printf("Soma final: %d\n", resultado);
    
/* DOCUMENTAÇÃO DO COMPORTAMENTO:
   Se `#define DEBUG` existir, o pré-processador inclui a linha de log.
   Se a macro for comentada, o pré-processador apara o `printf` de 
   DEBUG do código antes dele ir para o compilador. O executável fica 
   menor e mais rápido sem ter que calcular um 'if' no tempo de execução.
*/
    
return 0;
}