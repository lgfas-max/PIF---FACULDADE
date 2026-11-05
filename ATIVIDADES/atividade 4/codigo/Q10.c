#include <stdio.h>
int main() {
int num;
printf("Digite um numero inteiro aleatorio: ");
scanf("%d", &num);
if (num % 2 ==0){
    printf("O numero e par.\n");
} else {
    printf("O numero e impar.\n");
}
if (num > 0){
    printf("O numero e positivo.\n");
} else if (num < 0) {
    printf("O numero e negativo.\n");
} else {
    printf("O numero e zero.\n");
}
    return 0;
}