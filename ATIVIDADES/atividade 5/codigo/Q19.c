#include <stdio.h>

void contagem(int n) {
if (n == 0) {
    printf("Fogo!\n");
    return;
}
printf("%d\n", n);
contagem(n - 1); 
}

void contagemCrescente(int n) {
if (n == 0) return;
    
contagemCrescente(n - 1);
printf("%d\n", n);
    

}

int main() {
int num;
printf("Digite um valor positivo para a contagem: ");
scanf("%d", &num);
    
if (num > 0) {
printf("--- Contagem Regressiva ---\n");
contagem(num);
        
printf("\n--- Contagem Crescente ---\n");
contagemCrescente(num);
}
    
return 0;
}
/* EXPLICACÃO DO COMPORTAMENTO:
       Colocando o printf DEPOIS da chamada recursiva, o C empilha todas 
       as chamadas na memória até chegar no caso base (n=0). 
       Quando a execução retorna (desempilha), o primeiro printf a ser 
       executado é o do último item colocado na pilha (n=1), depois o n=2, 
       até o valor original, imprimindo em ordem crescente.
    */