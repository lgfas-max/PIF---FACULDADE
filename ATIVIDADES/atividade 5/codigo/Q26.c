#include <stdio.h>

long fibonacci(int n) {
if (n == 0) return 0;
if (n == 1) return 1;
return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
int termos;
printf("Quantos termos da sequencia de Fibonacci deseja exibir? ");
scanf("%d", &termos);
    
printf("Sequencia: ");
for (int i = 0; i < termos; i++) {
    printf("%ld ", fibonacci(i));
}
printf("\n");
    
/* COMENTÁRIO DE DESEMPENHO:
   A versão recursiva pura da Fibonacci é muito ineficiente para valores
   grandes (ex: n=45 ou maior). Para calcular fibonacci(n), ela invoca
   fibonacci(n-1) e fibonacci(n-2), recalculando os mesmos valores 
   repetidas vezes, criando uma árvore de chamadas gigantesca de complexidade O(2^n).
*/
    
    return 0;
}