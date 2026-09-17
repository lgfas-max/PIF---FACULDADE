#include <stdio.h>

int main() {
int num;
    
printf("Digite um numero inteiro: ");
scanf("%d", &num);
    
printf("Quadrado: %d\n", num * num);
printf("Decima parte: %.2f\n", (float)num / 10.0);
    
return 0;
}