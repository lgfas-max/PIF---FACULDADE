#include <stdio.h>

int ePar(int n) {
return (n % 2 == 0) ? 1 : 0;
}

int main() {
int num;
printf("Digite um inteiro: ");
scanf("%d", &num);
    
if (ePar(num)) {
    printf("O numero %d eh par.\n", num);
} else {
    printf("O numero %d eh impar.\n", num);
}
    
    return 0;
}