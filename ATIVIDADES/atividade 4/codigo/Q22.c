#include <stdio.h>

int main() {
    float valor, final;
    int estado;
    
    printf("Valor e Estado (1=MG, 2=SP, 3=RJ, 4=MS): ");
    scanf("%f %d", &valor, &estado);

    switch(estado) {
        case 1: final = valor * 1.07; break;
        case 2: final = valor * 1.12; break;
        case 3: final = valor * 1.15; break;
        case 4: final = valor * 1.08; break;
        default: printf("Estado invalido.\n"); return 1;
    }

    printf("Preco final: R$ %.2f\n", final);
    return 0;
}