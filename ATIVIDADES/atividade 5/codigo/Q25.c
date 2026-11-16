#include <stdio.h>

int mdc(int a, int b) {
if (b == 0) return a;
return mdc(b, a % b);
}

void simplifica(int num, int den) {
if (den == 0) {
    printf("Fracao invalida (denominador zero).\n");
    return;
}
    
int divisor = mdc(num, den);
printf("Fracao simplificada: %d/%d\n", num / divisor, den / divisor);
}

int main() {
int n, d;
printf("Digite o numerador e o denominador da fracao (positivos): ");
scanf("%d %d", &n, &d);
    
printf("MDC: %d\n", mdc(n, d));
simplifica(n, d);
    
return 0;
}