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
    num = pow(num, 2);
    printf("o quadrado do numero: %lf",num);
}

return 0;}