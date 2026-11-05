#include <stdio.h>

int main() {
    float salario, aumento = 0, novo_salario;
    int cargo;
    
    printf("Salario atual e cargo (1-Tec, 2-Ger, 3-Outros): ");
    scanf("%f %d", &salario, &cargo);

    switch(cargo) {
        case 1: aumento = salario * (salario <= 3000 ? 0.15 : 0.10); break;
        case 2: aumento = salario * (salario <= 5000 ? 0.10 : 0.05); break;
        case 3: aumento = salario * 0.08; break;
        default: printf("Cargo invalido.\n"); return 1;
    }

    novo_salario = salario + aumento;
    printf("Aumento: R$ %.2f | Novo Salario: R$ %.2f\n", aumento, novo_salario);
    return 0;
}