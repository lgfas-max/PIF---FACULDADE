#include <stdio.h>
#include <math.h>

int main(){
float num;
printf("Digite um numero real: ");
scanf("%f", &num);

if (num >= 0) {
    num = sqrt(num);
    printf("A raiz quadrada do numero e: %f", num);
}
else {
    num = round(pow(num, 2));
    printf("o quadrado do numero: %.2f",num);
}

return 0;}