#include <stdio.h>
#include "areas.h"

int main() {
float r = 2.0, b = 3.0, h = 4.0;
printf("Area Circulo: %.2f\n", A_CIRC(r));
printf("Area Retangulo: %.2f\n", A_RET(b, h));
printf("Area Triangulo: %.2f\n", A_TRI(b, h));
return 0;
}