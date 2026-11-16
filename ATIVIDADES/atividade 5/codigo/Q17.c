#include <stdio.h>

long fatorialIterativo(int n) {
long fat = 1;
for (int i = 2; i <= n; i++) {
    fat *= i;
}
return fat;
}

long fatorialRecursivo(int n) {
if (n == 0 || n == 1) return 1;
return n * fatorialRecursivo(n - 1);
}

int main() {
int num;
printf("Digite um inteiro nao negativo: ");
scanf("%d", &num);
    
if (num >= 0) {
    printf("Fatorial Iterativo: %ld\n", fatorialIterativo(num));
    printf("Fatorial Recursivo: %ld\n", fatorialRecursivo(num));
} else {
    printf("Fatorial de numero negativo nao existe.\n");
}
    
return 0;
}