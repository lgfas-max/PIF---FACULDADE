#include <stdio.h>
#include <math.h>

int main() {
float a, b, c;
    
printf("Digite os tres lados do triangulo: ");
scanf("%f %f %f", &a, &b, &c);

float p = (a + b + c) / 2.0;
float area = sqrt(p * (p - a) * (p - b) * (p - c));

printf("Area do triangulo (Heron): %.2f\n", area);
    
return 0;
}