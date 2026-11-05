#include <stdio.h>

int main() {
    int op;
    float temp, conv;

    printf("1: C->F | 2: C->K | 3: F->C | 4: K->C\nEscolha: ");
    scanf("%d", &op);
    printf("Temperatura: ");
    scanf("%f", &temp);

    switch(op) {
        case 1: conv = temp * 1.8 + 32; printf("%.2f F\n", conv); break;
        case 2: conv = temp + 273.15; printf("%.2f K\n", conv); break;
        case 3: conv = (temp - 32) / 1.8; printf("%.2f C\n", conv); break;
        case 4: conv = temp - 273.15; printf("%.2f C\n", conv); break;
        default: printf("Opcao invalida!\n");
    }
    return 0;
}