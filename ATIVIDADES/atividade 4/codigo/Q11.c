#include <stdio.h>
int main () {
int num1, num2, num3, temp;
printf("Digite o primeiro numero: ");
scanf("%d", &num1);
printf("Digite o segundo numero: ");
scanf("%d", &num2);
printf("Digite o terceiro numero: ");
scanf("%d", &num3);
if (num1 > num2) { temp = num1; num1 = num2; num2 = temp; }
if (num1 > num3) { temp = num1; num1 = num3; num3 = temp; }
if (num2 > num3) { temp = num2; num2 = num3; num3 = temp; }

printf("Ordem crescente: %d %d %d\n", num1, num2, num3);
return 0;
}