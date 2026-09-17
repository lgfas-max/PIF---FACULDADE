#include <stdio.h>
#include <math.h>

int main(){
float lado_A, lado_B;

printf("Digite os valores dos catetos: ");
scanf("%f, %f", &lado_A, &lado_B);

float hipotenusa = sqrt(pow(lado_A, 2) + pow(lado_B, 2));

printf("Esse e o valor da hipotenusa: %2.f", hipotenusa);

return 0;
}