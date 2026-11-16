#include <stdio.h>

int ehPrimo(int n) {
if (n <= 1) return 0;
    
for (int i = 2; i < n; i++) {
    if (n % i == 0) return 0;
}
return 1;
}

int main() {
int num;
printf("Digite um inteiro para verificar: ");
scanf("%d", &num);
    
if (ehPrimo(num)) {
    printf("%d e primo.\n\n", num);
} else {
    printf("%d nao e primo.\n\n", num);
}
    
printf("Primos de 1 a 50:\n");
for (int i = 1; i <= 50; i++) {
    if (ehPrimo(i)) {
        printf("%d ", i);
    }
}
printf("\n");
    
return 0;
}