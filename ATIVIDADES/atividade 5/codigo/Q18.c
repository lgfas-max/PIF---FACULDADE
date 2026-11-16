#include <stdio.h>

long potencia(int base, int expoente) {

if (expoente == 0) return 1;
    

return base * potencia(base, expoente - 1);
}

int main() {
int b, e;
printf("Digite a base e o expoente: ");
scanf("%d %d", &b, &e);

if (e >= 0) {
    printf("Resultado: %ld\n", potencia(b, e));
} else {
    printf("Erro: Expoente negativo nao suportado por esta implementacao.\n");
}
    
return 0;
}