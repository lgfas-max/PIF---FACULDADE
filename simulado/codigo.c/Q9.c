#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, p, area;

    printf("Digite os lados a, b e c do triangulo: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Semiperimetro: %.2lf\n", p);
    printf("Area do triangulo: %.3lf\n", area);

    return 0;
}