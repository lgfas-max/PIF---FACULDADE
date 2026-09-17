#include <stdio.h>

int main() {
float lado, base, altura;

printf("Digite o lado do quadrado: ");
scanf("%f", &lado);
    
printf("Digite a base e a altura do retangulo: ");
scanf("%f %f", &base, &altura);
    
printf("Digite a base e a altura do triangulo: ");
scanf("%f %f", &base, &altura);


printf("Area do Quadrado: %.2f\n", lado * lado);
printf("Area do Retangulo: %.2f\n", base * altura);
printf("Area do Triangulo Retangulo: %.2f\n", (base * altura) / 2.0);

return 0;
}