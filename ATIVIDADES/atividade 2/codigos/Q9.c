#include <stdio.h>

int main() {
int a, b;
    
printf("Digite dois numeros inteiros: ");
scanf("%d %d", &a, &b);

printf("Soma: %d\n", a + b);
printf("Subtracao: %d\n", a - b);
printf("Multiplicacao: %d\n", a * b);
printf("Divisao real: %.2f\n", (float)a / b);
    
return 0;
}